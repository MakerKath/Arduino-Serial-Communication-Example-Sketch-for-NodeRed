/*
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
    
*/

int pin8(8); //Assigning integrer ID to pin #8

void setup() { //Setup Declaration
  // put your setup code here, to run once:

  pinMode(pin8,OUTPUT);  //Configuring pin #8 to be an output pin, where pin 8 become a toggle 5 volt output.
  Serial.begin(9600);    //Telling Arduino to enable Serial communication at 9600 baud rate.

}

void loop() { //Declaring looping script, which is what the Arduino will run continously.
  // put your main code here, to run repeatedly:

  int SerialData = Serial.read();  //Read Serial data given from the interacting computer.
  Serial.println(SerialData);  //Telling Arduino to return the recieved Serial data back to the interacting computer.
  
  
  //Beginning Optional side of script, enabled by default. Can be disabled with a double slash or a /* MultiLine Comment Toggle */
  
  if (SerialData == 54) {  //Initializing if statement. In this case we are checking if the Serial value recieved earlier is equal to 54
    digitalWrite(pin8,HIGH);  //Writing to Digital Pin #8 to turn on output at 5 volt
  }
  else {  //Else statement for when the if statement isn't matched, in this case empty.
  }
  if (SerialData == 55) {  //Initializing another if statement, checking if Serial value is equal to 55
    digitalWrite(pin8,LOW);    //Writing to Digital Pin #8 to turn off output, 0 volt
  }
  else {  //Another else statement, empty again. Doesn't need to be here actually.
  }

delay(2000);  /*1 second delay to enable enough time for the user to see the Serial data that was sent back to learn the interactions. 
                Especially useful for learning how information is recieved when devices are sending information at different bits (Arduino Uno is 8 bit)*/
}
