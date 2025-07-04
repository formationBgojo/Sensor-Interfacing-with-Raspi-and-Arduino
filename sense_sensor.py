from sense_hat import SenseHat
import time
sense = SenseHat()
while True :
temp = sense.get_temperature()
humidity = sense.get_humidity()
pressure = sense.get_pressure()
print(f"Temp:␣{temp:.1f}C␣␣Humidity:␣{humidity:.1f}%␣␣Pressure:␣{pressure:.1f}hPa")
time.sleep(2)
