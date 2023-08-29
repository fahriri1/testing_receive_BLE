/**

< KOMUNIKASI ARDUINO TO APPS >

Tujuan :
- Mengirim data dari Arduino menuju Apps

Time : 10.15
Date : 29/08/2023

BLE -> Serial3
**/

void setup() {
  Serial.begin(9600);
  Serial3.begin(9600);
}

void loop() {
  //receive data
  if(Serial.available()){
    String mesg = Serial.readStringUntil('\n');
    Serial.print("Pesan yang akan dikirim : ");
    Serial.println(mesg);
    Serial3.print(mesg);
  }
}
