import plotly.graph_objects as go
import pandas as pd
import numpy as np

# Load the data
data = {
    "categorias": ["Estimativa sem fonte", "Custo baseado em fontes reais"],
    "valores": [471000, 37887.50],
    "cores": ["#F44336", "#4CAF50"]
}

# Create a DataFrame
df = pd.DataFrame(data)

# Format values for display
df['valores_formatados'] = df['valores'].apply(lambda x: f"R$ {x/1000:.1f}k" if x >= 1000 else f"R$ {x:.2f}")

# Create the horizontal bar chart
fig = go.Figure()

fig.add_trace(
    go.Bar(
        y=df['categorias'],
        x=df['valores'],
        orientation='h',
        marker_color=df['cores'],
        text=df['valores_formatados'],
        textposition='outside',
        cliponaxis=False
    )
)

# Update layout
fig.update_layout(
    title="Comparação de custos para implementação",
    showlegend=False,
)

# Update axes
fig.update_xaxes(title="Custo (R$)")
fig.update_yaxes(title="")

# Save the chart
fig.write_image("cost_comparison.png")

fig.show()