import plotly.express as px
import plotly.graph_objects as go

# Data for the chart - in descending order by cost
sistemas = ["Est. sem fonte", "Sist. Lages-SC*", "Sist. UFSCar*", "Comp. IoT basic"]
custos = [471000, 60000, 50000, 37887.50]

# Colors as specified in instructions: red, orange, green, blue
colors = ['#B4413C', '#FFC185', '#ECEBD5', '#1FB8CD']

# Create horizontal bar chart
fig = go.Figure(data=[
    go.Bar(
        y=sistemas,
        x=custos,
        orientation='h',
        marker_color=colors,
        text=[f'R$ {c:,.0f}' for c in custos],
        textposition='outside',
        cliponaxis=False
    )
])

# Update layout
fig.update_layout(
    title="Temp Monitor System Costs",
    xaxis_title="Cost (R$)",
    yaxis_title="System Type"
)

# Update x-axis formatting to show full numbers
fig.update_xaxes(
    tickformat=',.0f'
)

# Save the chart
fig.write_image("temperature_monitoring_costs.png")