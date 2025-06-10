import plotly.express as px
import plotly.graph_objects as go

# Data with specific colors as provided
labels = ["Confirmados", "Sem Fonte"]
values = [42.9, 57.1]
colors = ["#4CAF50", "#F44336"]  # Green for confirmados, red for sem fonte

# Create pie chart
fig = go.Figure(data=[go.Pie(
    labels=labels,
    values=values,
    marker_colors=colors,
    textinfo='label+percent',
    textposition='inside'
)])

# Update layout
fig.update_layout(
    title="Dados: Confirmados vs Sem Fonte",
    uniformtext_minsize=14, 
    uniformtext_mode='hide'
)

# Save chart
fig.write_image("data_verification_pie_chart.png")