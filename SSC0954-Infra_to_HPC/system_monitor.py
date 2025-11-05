#!/usr/bin/env python3
# Script para monitorar sistema em tempo real

import psutil
import time
import json
from datetime import datetime

def get_system_metrics():
    """Coleta métricas básicas do sistema"""
    return {
        'timestamp': datetime.now().isoformat(),
        'cpu_percent': psutil.cpu_percent(interval=1),
        'memory_percent': psutil.virtual_memory().percent,
        'disk_percent': psutil.disk_usage('/').percent,
        'network_io': dict(psutil.net_io_counters()._asdict()),
        'load_avg': psutil.getloadavg() if hasattr(psutil, 'getloadavg') else [0, 0, 0]
    }

def main():
    print("📊 Monitor do Sistema - Pressione Ctrl+C para parar")
    print("=" * 60)

    try:
        while True:
            metrics = get_system_metrics()

            print(f"🕐 {metrics['timestamp']}")
            print(f"💻 CPU: {metrics['cpu_percent']:5.1f}%")
            print(f"🧠 RAM: {metrics['memory_percent']:5.1f}%")
            print(f"💾 Disk: {metrics['disk_percent']:5.1f}%")
            print(f"📡 Net RX: {metrics['network_io']['bytes_recv']:,} bytes")
            print(f"📤 Net TX: {metrics['network_io']['bytes_sent']:,} bytes")
            print("-" * 40)

            time.sleep(10)

    except KeyboardInterrupt:
        print("\n🛑 Monitoramento parado pelo usuário")
    except Exception as e:
        print(f"❌ Erro: {e}")

if __name__ == "__main__":
    main()
