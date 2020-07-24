pages = """00 Undefined
01 Generic Desktop Controls
02 Simulation Controls 
03 VR Controls
04 Sport Controls
05 Game Controls
06 Generic Device Controls
07 Keyboard/Keypad
08 LEDs
09 Button
0A Ordinal
0B Telephony
0C Consumer
0D Digitizer
0E Reserved
0F PID Page 
10 Unicode
11-13 Reserved
14 Alphanumeric Display
15-3f Reserved
40 Medical Instruments
41-7F Reserved
80-83 Monitor pages 
84-87 Power pages 
88-8B Reserved
8C Bar Code Scanner page 
8E Magnetic Stripe Reading (MSR)Devices
8F Reserved Point of Sale pages
90 Camera Control Page 
91 Arcade Page
92-FEFF Reserved
FF00-FFFF Vendor-defined"""

print("if(0 == 0) return 0;")
for i in pages.split('\n'):
  i = i.strip()

  num, rep = i.split(' ', 1)
  if '-' in num:
    nummin, nummax = num.split('-')
    print('else if(PageID >= 0x%s && PageID <= 0x%s) return _T("%s");'%(nummin, nummax, rep))
  else:
    print('else if(PageID == 0x%s) return _T("%s");'%(num, rep))
