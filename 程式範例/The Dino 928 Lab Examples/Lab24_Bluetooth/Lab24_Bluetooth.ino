#include <MeetAndroid.h> // include Android Bluetooth Library header

MeetAndroid AppsduinoBT; //-- declare one MeetAndroid Bluetooth object  --

void setup() {
Serial.begin(57600); // setup baud rate
AppsduinoBT.registerFunction(BTCommHandler, 'C');  //register one call back function
}
void loop() {
AppsduinoBT.receive() ; // you need to keep this in your loop() to receive events   
//Serial.print(1+'\n');
}

void BTCommHandler (byte flag, byte numOfValues)  {//'c' flag to receive BT cmd
//    Serial.print(1);
  int cmd = AppsduinoBT.getInt();
  char a[1024];
  AppsduinoBT.getString(a);
  Serial.print(a);
  Serial.print(cmd);



//  If (cmd == ??) do_action ; 
//  ……



}
 

