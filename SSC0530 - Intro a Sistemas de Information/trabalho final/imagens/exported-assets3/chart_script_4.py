import plotly.graph_objects as go

# Data for the table
data = {"Status": ["Dados Confirmados", "Dados Sem Fonte", "Total Analisado"], 
        "Quantidade": [6, 8, 14], 
        "Percentual": ["42,9%", "57,1%", "100%"]}

# Abbreviate column headers to fit 15 character limit
headers = ["Status", "Qtde", "Percentual"]

# Create table values combining quantity and percentage
table_status = ["Dados Confirm", "Dados S/Fonte", "Total Analis"]
table_values = [
    f"{data['Quantidade'][0]} ({data['Percentual'][0]})",
    f"{data['Quantidade'][1]} ({data['Percentual'][1]})", 
    f"{data['Quantidade'][2]} ({data['Percentual'][2]})"
]

# Set colors - green for confirmed, red for no source, gray for total
row_colors = ["#ECEBD5", "#B4413C", "#5D878F"]

# Create table
fig = go.Figure(data=[go.Table(
    header=dict(
        values=["Status", "Qtde (%)"],
        fill_color='lightgray',
        align='left',
        font=dict(size=14)
    ),
    cells=dict(
        values=[table_status, table_values],
        fill_color=[row_colors, row_colors],
        align='left',
        font=dict(size=12, color='white')
    )
)])

fig.update_layout(
    title="Status dos Dados"
)

fig.write_image("dados_status_chart.png")