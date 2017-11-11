# Arduino-Serial-Communication-Example-Sketch-for-NodeRed

Node-Red Arduino-PC sample sketch
  ~Written by Eric Fillion
  ~Updated Nov 11, 2017
  
  This script allow basic interactions with Node-Red,
  to prepare for uses of this script, the user need to install Node-Red and certain Nodes.
  
  Node-Red install:
    1: Install Nodejs https://nodejs.org/en/
    2: Follow installation instructions
    3: Install Node-Red using Nodejs install functions using commandline/terminal. Remove "Sudo" if on windows.
          https://nodered.org/docs/getting-started/installation
    4: Run Node-Red once before installing nodes. Type "node-red" in commandline/terminal
    5: Ctrl + C and terminate batch jobs.
    
  Nodes Installation:
    1: Install Dashboard, follow instructions:
        https://flows.nodered.org/node/node-red-dashboard
    2: Install SerialPort, follow instructions:
        https://flows.nodered.org/node/node-red-node-serialport
        
  Running Node-Red:
    1: Open commandline/terminal
    2: type "node-red"
    3: head over to the http address given
    4: Experiement and code away.
    
  Stopping Node-Red:
    1:Return to running commandline/terminal where Node-Red is running.
    2:Ctrl + C and Terminalte batch job Y.
    
  Node-Red Instruction for this Sketch:
    1: Use Dashboard button node to make a switch
      Configure switch to send a number string.
    2:Use Serial Output, Set connection to the COM port the Arduino is connected to.
    3:Connect switch to Serial Output
    4:Use Serial Input, Set connection to COM port Arduino is connected to.
    5:Add a Debug Output and/or notification output.
    6:Connect Serial Input to Debug and/or Notification output.
    
  Optional:
    Connect pin #8 as positive terminal to 220 ohm resistor in series
    with a LED (Make sure it's correctly oriented). 
    Ground (GND) opposing side of circuit to make a closed loop circuit.
    
    WARNING: Do not Short the circuit.
    Note: You can change the pins if you want. Button set to payload 0 will send 
    Serial 48 and so on due to bits differences. You can see the effect on payload 16.