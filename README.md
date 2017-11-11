# Arduino-Serial-Communication-Example-Sketch-for-NodeRed

# Node-Red Arduino-PC sample sketch
  ~Written by Eric Fillion<br/>
  ~Updated Nov 11, 2017
  
  This script allow basic interactions with Node-Red,<br/>
  to prepare for uses of this script, the user need to install Node-Red and certain Nodes.<br/>
  
  <h3>Node-Red install:<h3/><br/>
    <b>1.</b> Install Nodejs <a href=https://nodejs.org/en/>https://nodejs.org/en/</a><br/>
    <b>2.</b> Follow installation instructions<br/>
    <b>3.</b> Install Node-Red using Nodejs install functions using commandline/terminal. Remove "Sudo" if on windows.<br/>
          <a href=https://nodered.org/docs/getting-started/installation>https://nodered.org/docs/getting-started/installation</a><br/>
    <b>4.</b> Run Node-Red once before installing nodes. Type "node-red" in commandline/terminal<br/>
    <b>5.</b> Ctrl + C and terminate batch jobs.<br/>
    <br/>
  <h3>Nodes Installation:<h3/><br/>
    <b>1.</b> Install Dashboard, follow instructions:<br/>
        <a href=https://flows.nodered.org/node/node-red-dashboard>https://flows.nodered.org/node/node-red-dashboard</a><br/>
    <b>2.</b> Install SerialPort, follow instructions:<br/>
        <a href=https://flows.nodered.org/node/node-red-node-serialport>https://flows.nodered.org/node/node-red-node-serialport</a><br/>
        <br/>
  <h3>Running Node-Red:<h3/><br/>
    <b>1.</b> Open commandline/terminal<br/>
    <b>2.</b> type "node-red"<br/>
    <b>3.</b> head over to the http address given<br/>
    <b>4.</b> Experiement and code away.<br/>
    <br/>
  <h3>Stopping Node-Red:<h3/><br/>
    <b>1.</b> Return to running commandline/terminal where Node-Red is running.<br/>
    <b>2.</b> Ctrl + C and Terminalte batch job Y.<br/>
    <br/>
  <h3>Node-Red Instruction for this Sketch:<h3/><br/>
    <b>1.</b> Use Dashboard button node to make a switch<br/>
      Configure switch to send a number string.<br/>
    <b>2.</b> Use Serial Output, Set connection to the COM port the Arduino is connected to.<br/>
    <b>3.</b> Connect switch to Serial Output<br/>
    <b>4.</b> Use Serial Input, Set connection to COM port Arduino is connected to.<br/>
    <b>5.</b> Add a Debug Output and/or notification output.<br/>
    <b>6.</b> Connect Serial Input to Debug and/or Notification output.<br/>
    <br/>
  <h3>Optional:<h3/><br/>
    Connect pin #8 as positive terminal to 220 ohm resistor in series<br/>
    with a LED (Make sure it's correctly oriented). <br/>
    Ground (GND) opposing side of circuit to make a closed loop circuit.<br/>
    <br/>
    <h2>WARNING: Do not Short the circuit.<h2/> <br/>
    Note: You can change the pins if you want. Button set to payload 0 will send <br/>
    Serial 48 and so on due to bits differences. You can see the effect on payload 16.<br/>