usage = """00 Undefined
01 Pointer
02 Mouse 
03 Reserved
04 Joystick
05 Game Pad
06 Keyboard
07 Keypad
08 Multi-axis Controller
09 Tablet PC System Controls
0A-2F Reserved
30 X
31 Y
32 Z
33 Rx
34 Ry
35 Rz
36 Slider
37 Dial
38 Wheel
39 Hat switch
3A Counted Buffer
3B Byte Count
3C Motion Wakeup
3D Start
3E Select
3F Reserved
40 Vx
41 Vy
42 Vz
43 Vbrx
44 Vbry
45 Vbrz
46 Vno
47 Feature Notification
48 Resolution Multiplier
49-7F Reserved
80 System Control
81 System Power Down 
82 System Sleep 
83 System Wake Up 
84 System Context Menu 
85 System Main Menu 
86 System App Menu 
87 System Menu Help 
88 System Menu Exit
89 System Menu Select 
8A System Menu Right 
8B System Menu Left 
8C System Menu Up 
8D System Menu Down 
8E System Cold Restart 
8F System Warm Restart 
90 D-pad Up 
91 D-pad Down 
92 D-pad Right 
93 D-pad Left O
94-9F Reserved
A0 System Dock 
A1 System Undock 
A2 System Setup
A3 System Break
A4 System Debugger Break 
A5 Application Break
A6 Application Debugger Break
A7 System Speaker Mute
A8 System Hibernate 
A9-AF Reserved
B0 System Display Invert 
B1 System Display Internal 
B2 System Display External 
B3 System Display Both 
B4 System Display Dual O
B5 System Display Toggle Int/Ext
B6 System Display SwapPrimary/Secondary
B7 System Display LCD Autoscale
B8-FFFF Reserved"""




"""00 Undefined
01 Flight Simulation Device
02 Automobile Simulation Device
03 Tank Simulation Device
04 Spaceship Simulation Device
05 Submarine Simulation Device 
06 Sailing Simulation Device
07 Motorcycle Simulation Device 
08 Sports Simulation Device
09 Airplane Simulation Device 
0A Helicopter Simulation Device
0B Magic Carpet Simulation Device
0C Bicycle Simulation Device
0D–1F Reserved
20 Flight Control Stick
21 Flight Stick
22 Cyclic Control
23 Cyclic Trim
24 Flight Yoke
25 Track Control
26–AF Reserved
B0 Aileron
B1 Aileron Trim
B2 Anti-Torque Control
B3 Autopilot Enable
B4 Chaff Release
B5 Collective Control
B6 Dive Brake
B7 Electronic Countermeasures
B8 Elevator
B9 Elevator Trim
BA Rudder
BB Throttle
BC Flight Communications
BD Flare Release
BE Landing Gear
BF Toe Brake
C0 Trigger 
C1 Weapons Arm 
C2 Weapons Select
C3 Wing Flaps
C4 Accelerator
C5 Brake 
C6 Clutch
C7 Shifter 
C8 Steering
C9 Turret Direction
CA Barrel Elevation
CB Dive Plane
CC Ballast
CD Bicycle Crank
CE Handle Bars
CF Front Brake
D0 Rear Brake
D1-FFFF Reserved"""








print("if(0 == 0) return 0;")
for i in usage.split('\n'):
  i = i.strip()

  num, rep = i.split(' ', 1)
  if '-' in num:
    nummin, nummax = num.split('-')
    print('else if(Usage >= 0x%s && Usage <= 0x%s) return _T("%s");'%(nummin, nummax, rep))
  else:
    print('else if(Usage == 0x%s) return _T("%s");'%(num, rep))
