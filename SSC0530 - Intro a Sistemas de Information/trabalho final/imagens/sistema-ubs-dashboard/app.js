// UBS Monitoring Dashboard JavaScript

// Extended UBS data based on the provided sample
const ubsData = [
    {"id": 1, "nome": "UBS Central", "status": "online", "temperatura": 4.2, "consumo_kw": 15.8, "vacinas_status": "OK", "lat": -22.0175, "lng": -47.8909},
    {"id": 2, "nome": "UBS Cidade Aracy", "status": "online", "temperatura": 6.1, "consumo_kw": 12.3, "vacinas_status": "Atenção", "lat": -22.0789, "lng": -47.9321},
    {"id": 3, "nome": "UBS Vila Isabel", "status": "offline", "temperatura": 8.5, "consumo_kw": 0, "vacinas_status": "Crítico", "lat": -22.0098, "lng": -47.8567},
    {"id": 4, "nome": "UBS Santa Felícia", "status": "online", "temperatura": 3.8, "consumo_kw": 14.1, "vacinas_status": "OK", "lat": -21.9876, "lng": -47.8743},
    {"id": 5, "nome": "UBS Jardim Gonzaga", "status": "online", "temperatura": 5.2, "consumo_kw": 13.7, "vacinas_status": "OK", "lat": -22.0432, "lng": -47.8654},
    {"id": 6, "nome": "UBS Redenção", "status": "online", "temperatura": 4.8, "consumo_kw": 16.2, "vacinas_status": "OK", "lat": -22.0298, "lng": -47.8945},
    {"id": 7, "nome": "UBS São José", "status": "online", "temperatura": 3.5, "consumo_kw": 11.9, "vacinas_status": "OK", "lat": -22.0187, "lng": -47.8632},
    {"id": 8, "nome": "UBS Antenor Garcia", "status": "online", "temperatura": 5.8, "consumo_kw": 13.4, "vacinas_status": "Atenção", "lat": -22.0356, "lng": -47.9124},
    {"id": 9, "nome": "UBS Vila Carmen", "status": "online", "temperatura": 4.3, "consumo_kw": 14.7, "vacinas_status": "OK", "lat": -22.0145, "lng": -47.8798},
    {"id": 10, "nome": "UBS Cruzeiro do Sul", "status": "online", "temperatura": 6.2, "consumo_kw": 15.1, "vacinas_status": "OK", "lat": -22.0067, "lng": -47.8456},
    {"id": 11, "nome": "UBS Jardim Pacaembu", "status": "online", "temperatura": 4.9, "consumo_kw": 12.8, "vacinas_status": "OK", "lat": -22.0234, "lng": -47.8712},
    {"id": 12, "nome": "UBS Vila Nery", "status": "offline", "temperatura": 9.1, "consumo_kw": 0, "vacinas_status": "Crítico", "lat": -22.0089, "lng": -47.8834},
    {"id": 13, "nome": "UBS Jardim São Paulo", "status": "online", "temperatura": 3.7, "consumo_kw": 13.9, "vacinas_status": "OK", "lat": -22.0423, "lng": -47.8567},
    {"id": 14, "nome": "UBS Vila Prado", "status": "online", "temperatura": 5.1, "consumo_kw": 14.3, "vacinas_status": "OK", "lat": -22.0312, "lng": -47.8989},
    {"id": 15, "nome": "UBS Jardim Bethânia", "status": "online", "temperatura": 4.4, "consumo_kw": 11.6, "vacinas_status": "OK", "lat": -22.0156, "lng": -47.8645},
    {"id": 16, "nome": "UBS Jardim Maracanã", "status": "online", "temperatura": 6.0, "consumo_kw": 15.5, "vacinas_status": "Atenção", "lat": -22.0387, "lng": -47.8723},
    {"id": 17, "nome": "UBS Jardim Tangará", "status": "online", "temperatura": 3.9, "consumo_kw": 12.7, "vacinas_status": "OK", "lat": -22.0201, "lng": -47.8856},
    {"id": 18, "nome": "UBS Vila São José", "status": "online", "temperatura": 5.3, "consumo_kw": 14.8, "vacinas_status": "OK", "lat": -22.0278, "lng": -47.8634},
    {"id": 19, "nome": "UBS Jardim Jockey Club", "status": "online", "temperatura": 4.6, "consumo_kw": 13.2, "vacinas_status": "OK", "lat": -22.0134, "lng": -47.8712},
    {"id": 20, "nome": "UBS Vila Monteiro", "status": "online", "temperatura": 5.7, "consumo_kw": 15.9, "vacinas_status": "OK", "lat": -22.0356, "lng": -47.8567},
    {"id": 21, "nome": "UBS Jardim Cardinalli", "status": "online", "temperatura": 4.1, "consumo_kw": 11.8, "vacinas_status": "OK", "lat": -22.0189, "lng": -47.8945},
    {"id": 22, "nome": "UBS Vila Boa Vista", "status": "online", "temperatura": 6.3, "consumo_kw": 14.5, "vacinas_status": "Atenção", "lat": -22.0298, "lng": -47.8678},
    {"id": 23, "nome": "UBS Jardim Gibertoni", "status": "online", "temperatura": 3.6, "consumo_kw": 12.4, "vacinas_status": "OK", "lat": -22.0167, "lng": -47.8789},
    {"id": 24, "nome": "UBS Vila Elizabeth", "status": "online", "temperatura": 5.4, "consumo_kw": 13.6, "vacinas_status": "OK", "lat": -22.0245, "lng": -47.8834},
    {"id": 25, "nome": "UBS Jardim Paulistano", "status": "online", "temperatura": 4.7, "consumo_kw": 15.3, "vacinas_status": "OK", "lat": -22.0334, "lng": -47.8612},
    {"id": 26, "nome": "UBS Vila Brasília", "status": "online", "temperatura": 5.9, "consumo_kw": 14.0, "vacinas_status": "OK", "lat": -22.0223, "lng": -47.8723}
];

const alertsData = [
    {"tipo": "Temperatura", "ubs": "UBS Vila Isabel", "descricao": "Temperatura acima de 8°C", "prioridade": "Alta"},
    {"tipo": "Conectividade", "ubs": "UBS Vila Isabel", "descricao": "Dispositivo offline há 2 horas", "prioridade": "Alta"},
    {"tipo": "Energia", "ubs": "UBS Cidade Aracy", "descricao": "Consumo 15% acima da média", "prioridade": "Média"},
    {"tipo": "Temperatura", "ubs": "UBS Vila Nery", "descricao": "Temperatura crítica: 9.1°C", "prioridade": "Alta"},
    {"tipo": "Conectividade", "ubs": "UBS Vila Nery", "descricao": "Sistema offline há 4 horas", "prioridade": "Alta"}
];

const estatisticas = {
    "total_ubs": 26,
    "ubs_online": 24,
    "alertas_ativos": 5,
    "economia_mensal": 45200
};

// Global variables for charts
let energyChart;
let temperatureChart;

// Initialize dashboard when page loads
document.addEventListener('DOMContentLoaded', function() {
    initializeDashboard();
    setupEventListeners();
    startRealTimeUpdates();
});

function initializeDashboard() {
    renderUBSCards();
    renderAlerts();
    createCharts();
    updateStatistics();
}

function setupEventListeners() {
    // Filter event listeners
    document.getElementById('statusFilter').addEventListener('change', applyFilters);
    document.getElementById('vacinaFilter').addEventListener('change', applyFilters);
    document.getElementById('resetFilters').addEventListener('click', resetFilters);
}

function renderUBSCards() {
    const ubsList = document.getElementById('ubsList');
    ubsList.innerHTML = '';

    ubsData.forEach(ubs => {
        const card = createUBSCard(ubs);
        ubsList.appendChild(card);
    });
}

function createUBSCard(ubs) {
    const card = document.createElement('div');
    card.className = 'card ubs-card';
    card.dataset.status = ubs.status;
    card.dataset.vacinas = ubs.vacinas_status;

    const statusClass = ubs.status === 'online' ? 'online' : 'offline';
    const statusText = ubs.status === 'online' ? 'Online' : 'Offline';
    
    const tempClass = getTemperatureClass(ubs.temperatura);
    const tempText = ubs.status === 'online' ? `${ubs.temperatura}°C` : '---';
    
    const energyText = ubs.status === 'online' ? `${ubs.consumo_kw} kW` : '0 kW';
    
    const vacinasClass = getVacinasStatusClass(ubs.vacinas_status);

    card.innerHTML = `
        <div class="ubs-card__header">
            <h4 class="ubs-card__title">${ubs.nome}</h4>
            <div class="ubs-card__status">
                <span class="status-indicator status-indicator--${statusClass}"></span>
                ${statusText}
            </div>
        </div>
        <div class="ubs-card__metrics">
            <div class="metric">
                <span class="metric__label">Temperatura</span>
                <span class="metric__value ${tempClass}">${tempText}</span>
            </div>
            <div class="metric">
                <span class="metric__label">Consumo</span>
                <span class="metric__value">${energyText}</span>
            </div>
        </div>
        <div class="ubs-card__footer">
            <div class="ubs-card__vaccines">
                <span class="status status--${vacinasClass.toLowerCase()}">${ubs.vacinas_status}</span>
            </div>
            <button class="btn btn--sm btn--primary" onclick="viewUBSDetails(${ubs.id})">
                Ver Detalhes
            </button>
        </div>
    `;

    return card;
}

function getTemperatureClass(temp) {
    if (temp < 2 || temp > 8) return 'metric__value--error';
    if (temp < 2.5 || temp > 7.5) return 'metric__value--warning';
    return 'metric__value--success';
}

function getVacinasStatusClass(status) {
    switch(status) {
        case 'OK': return 'success';
        case 'Atenção': return 'warning';
        case 'Crítico': return 'error';
        default: return 'info';
    }
}

function renderAlerts() {
    const alertsList = document.getElementById('alertsList');
    alertsList.innerHTML = '';

    alertsData.forEach(alert => {
        const alertItem = createAlertItem(alert);
        alertsList.appendChild(alertItem);
    });
}

function createAlertItem(alert) {
    const item = document.createElement('div');
    const priorityClass = alert.prioridade.toLowerCase() === 'alta' ? 'high' : 
                         alert.prioridade.toLowerCase() === 'média' ? 'medium' : 'low';
    
    item.className = `alert-item alert-item--${priorityClass}`;
    
    item.innerHTML = `
        <div class="alert-item__content">
            <div class="alert-item__title">${alert.tipo} - ${alert.ubs}</div>
            <div class="alert-item__description">${alert.descricao}</div>
        </div>
        <div class="alert-item__priority alert-item__priority--${priorityClass}">
            ${alert.prioridade}
        </div>
    `;

    return item;
}

function createCharts() {
    createEnergyChart();
    createTemperatureChart();
}

function createEnergyChart() {
    const ctx = document.getElementById('energyChart').getContext('2d');
    
    const onlineUBS = ubsData.filter(ubs => ubs.status === 'online');
    const labels = onlineUBS.slice(0, 10).map(ubs => ubs.nome.replace('UBS ', ''));
    const data = onlineUBS.slice(0, 10).map(ubs => ubs.consumo_kw);

    energyChart = new Chart(ctx, {
        type: 'bar',
        data: {
            labels: labels,
            datasets: [{
                label: 'Consumo (kW)',
                data: data,
                backgroundColor: '#1FB8CD',
                borderColor: '#21808D',
                borderWidth: 1,
                borderRadius: 4
            }]
        },
        options: {
            responsive: true,
            maintainAspectRatio: false,
            plugins: {
                legend: {
                    display: false
                }
            },
            scales: {
                y: {
                    beginAtZero: true,
                    grid: {
                        color: 'rgba(0, 0, 0, 0.1)'
                    }
                },
                x: {
                    grid: {
                        display: false
                    },
                    ticks: {
                        maxRotation: 45,
                        minRotation: 45
                    }
                }
            }
        }
    });
}

function createTemperatureChart() {
    const ctx = document.getElementById('temperatureChart').getContext('2d');
    
    // Generate temperature data for last 24 hours
    const hours = [];
    const tempData = [];
    const now = new Date();
    
    for (let i = 23; i >= 0; i--) {
        const hour = new Date(now.getTime() - (i * 60 * 60 * 1000));
        hours.push(hour.getHours() + ':00');
        // Simulate temperature variations throughout the day
        const baseTemp = 4.5;
        const variation = Math.sin((hour.getHours() / 24) * Math.PI * 2) * 1.5;
        const randomVariation = (Math.random() - 0.5) * 0.8;
        tempData.push(Math.round((baseTemp + variation + randomVariation) * 10) / 10);
    }

    temperatureChart = new Chart(ctx, {
        type: 'line',
        data: {
            labels: hours,
            datasets: [{
                label: 'Temperatura (°C)',
                data: tempData,
                borderColor: '#1FB8CD',
                backgroundColor: 'rgba(31, 184, 205, 0.1)',
                borderWidth: 2,
                fill: true,
                tension: 0.4
            }]
        },
        options: {
            responsive: true,
            maintainAspectRatio: false,
            plugins: {
                legend: {
                    display: false
                }
            },
            scales: {
                y: {
                    min: 0,
                    max: 10,
                    grid: {
                        color: 'rgba(0, 0, 0, 0.1)'
                    },
                    ticks: {
                        callback: function(value) {
                            return value + '°C';
                        }
                    }
                },
                x: {
                    grid: {
                        display: false
                    }
                }
            },
            elements: {
                point: {
                    radius: 3,
                    hoverRadius: 6
                }
            }
        }
    });
}

function updateStatistics() {
    // Update summary cards with current data
    const onlineCount = ubsData.filter(ubs => ubs.status === 'online').length;
    const alertsCount = alertsData.length;
    
    // Update the displayed values (they should match the cards in HTML)
    // This function could be used for real-time updates
    console.log(`UBSs Online: ${onlineCount}/${ubsData.length}`);
    console.log(`Alertas Ativos: ${alertsCount}`);
}

function applyFilters() {
    const statusFilter = document.getElementById('statusFilter').value;
    const vacinaFilter = document.getElementById('vacinaFilter').value;
    
    const cards = document.querySelectorAll('.ubs-card');
    
    cards.forEach(card => {
        const cardStatus = card.dataset.status;
        const cardVacinas = card.dataset.vacinas;
        
        let showCard = true;
        
        if (statusFilter && cardStatus !== statusFilter) {
            showCard = false;
        }
        
        if (vacinaFilter && cardVacinas !== vacinaFilter) {
            showCard = false;
        }
        
        card.style.display = showCard ? 'block' : 'none';
    });
}

function resetFilters() {
    document.getElementById('statusFilter').value = '';
    document.getElementById('vacinaFilter').value = '';
    
    const cards = document.querySelectorAll('.ubs-card');
    cards.forEach(card => {
        card.style.display = 'block';
    });
}

function viewUBSDetails(ubsId) {
    const ubs = ubsData.find(u => u.id === ubsId);
    if (ubs) {
        alert(`Detalhes da ${ubs.nome}:\n\nStatus: ${ubs.status}\nTemperatura: ${ubs.temperatura}°C\nConsumo: ${ubs.consumo_kw} kW\nStatus das Vacinas: ${ubs.vacinas_status}\n\nEm uma implementação completa, isso abriria uma página de detalhes.`);
    }
}

function startRealTimeUpdates() {
    // Simulate real-time updates every 30 seconds
    setInterval(() => {
        updateTemperatureData();
        updateEnergyData();
    }, 30000);
}

function updateTemperatureData() {
    // Simulate small temperature variations
    ubsData.forEach(ubs => {
        if (ubs.status === 'online') {
            const variation = (Math.random() - 0.5) * 0.2;
            ubs.temperatura = Math.round((ubs.temperatura + variation) * 10) / 10;
            
            // Keep temperature within reasonable bounds
            if (ubs.temperatura < 2) ubs.temperatura = 2.0;
            if (ubs.temperatura > 8.5) ubs.temperatura = 8.5;
        }
    });
    
    // Re-render UBS cards with updated data
    renderUBSCards();
}

function updateEnergyData() {
    // Simulate small energy consumption variations
    ubsData.forEach(ubs => {
        if (ubs.status === 'online') {
            const variation = (Math.random() - 0.5) * 0.5;
            ubs.consumo_kw = Math.round((ubs.consumo_kw + variation) * 10) / 10;
            
            // Keep energy consumption within reasonable bounds
            if (ubs.consumo_kw < 10) ubs.consumo_kw = 10.0;
            if (ubs.consumo_kw > 18) ubs.consumo_kw = 18.0;
        }
    });
    
    // Update energy chart
    if (energyChart) {
        const onlineUBS = ubsData.filter(ubs => ubs.status === 'online');
        const newData = onlineUBS.slice(0, 10).map(ubs => ubs.consumo_kw);
        energyChart.data.datasets[0].data = newData;
        energyChart.update('none');
    }
}

// Add some utility functions for responsive behavior
function handleResize() {
    if (energyChart) energyChart.resize();
    if (temperatureChart) temperatureChart.resize();
}

window.addEventListener('resize', handleResize);

// Export functions for global access
window.viewUBSDetails = viewUBSDetails;