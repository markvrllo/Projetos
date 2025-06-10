import pandas as pd
import plotly.graph_objects as go
import numpy as np

# Create DataFrame from provided data
data = {
    "sistemas": ["Estimativa sem fonte", "Componentes IoT básicos", "Sistema UFSCar 2021", "Sistema Lages-SC"],
    "custos": [471000, 37887.50, 50000, 60000],
    "estimated": [False, False, True, True]  # Track which are estimates
}
df = pd.DataFrame(data)

# Format values for display (abbreviate according to instructions)
df['custos_label'] = df['custos'].apply(lambda x: f"R$ {x/1000:.0f}k")

# Truncate system names to 15 chars and add asterisk for estimates
df['sistemas_short'] = df.apply(lambda row: 
    (row['sistemas'][:13] + '*' if row['estimated'] else row['sistemas'][:15]), axis=1)

# Use specified colors from instructions
colors = ['#F44336', '#03A9F4', '#4CAF50', '#FF9800']  # Red, Light Blue, Green, Orange

# Create figure with log scale to handle large differences
fig = go.Figure()

# Add bars
for i, row in df.iterrows():
    fig.add_trace(go.Bar(
        x=[row['sistemas_short']],
        y=[row['custos']],
        name=row['sistemas_short'],
        marker_color=colors[i],
        text=[row['custos_label']],
        textposition='outside',
        cliponaxis=False,
        showlegend=True
    ))

# Update layout with log scale for better visibility of differences
fig.update_layout(
    title="Cost Comparison Systems",
    yaxis=dict(
        title="Cost (R$)",
        type="log",  # Use log scale to handle large differences
        showgrid=True,
        gridcolor='lightgray',
        tickformat=",.0f"
    ),
    xaxis=dict(
        title="Systems",
        showgrid=False
    ),
    legend=dict(
        orientation='h', 
        yanchor='bottom', 
        y=1.05, 
        xanchor='center', 
        x=0.5
    ),
    bargap=0.4
)

# Add annotation for estimates note - positioned better
fig.add_annotation(
    text="*Estimates based on similar projects",
    xref="paper", yref="paper",
    x=0.02, y=0.02,  # Bottom left corner
    showarrow=False,
    font=dict(size=10),
    xanchor='left'
)

# Save the figure
fig.write_image("cost_comparison_final.png")

fig.show()