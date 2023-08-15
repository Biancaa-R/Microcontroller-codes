import serial
import time

ser=serial.Serial("COM5",9600,timeout=1)

time.sleep(2)

for i in range(600):
    line=ser.readline()
    line=line.decode("utf")
    print(line)
    
    if line not in ["DHTxx test!",""]:
        y=line.split()
        if len(y)>0 :
            humidity=y[1]
            if humidity in ["test","test!"]:
                continue

            if float( humidity [:-1])< 10:
                print("Very less humidity of",humidity)
            else:
                print("optimum humidity of",humidity)
    

  
