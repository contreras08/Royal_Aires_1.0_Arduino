void setup() {
 
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  //pinMode(12,OUTPUT);
  //pinMode(13,OUTPUT);
  //pinMode(14,OUTPUT);
  //pinMode(15,OUTPUT);
  //pinMode(16,OUTPUT);
  //pinMode(17,OUTPUT);
  //pinMode(18,OUTPUT);
  //pinMode(19,OUTPUT);
  //pinMode(20,OUTPUT);
  //pinMode(21,OUTPUT);
  //pinMode(22,OUTPUT);
  //pinMode(23,OUTPUT);
  //pinMode(24,OUTPUT);
  //pinMode(25,OUTPUT);
  //pinMode(26,OUTPUT);
  //pinMode(27,OUTPUT);
  //pinMode(28,OUTPUT);
  //pinMode(29,OUTPUT);
  //pinMode(30,OUTPUT);
  //pinMode(31,OUTPUT);
  //pinMode(32,OUTPUT);
  //pinMode(33,OUTPUT);
  //pinMode(34,OUTPUT);
  //pinMode(35,OUTPUT);
  //pinMode(36,OUTPUT);
  //pinMode(37,OUTPUT);
  //pinMode(38,OUTPUT);
  //pinMode(39,OUTPUT);
  //pinMode(40,OUTPUT);
  //pinMode(41,OUTPUT);
  Serial.begin(9600);
  
 
}

void loop() {
  if (Serial.available()){
    int dato = Serial.read();
    
   
    if(dato == '0'){
      digitalWrite(10,LOW);
      delay(10);
    }
    if(dato == '1'){
      digitalWrite(10,HIGH);
      delay(10);
    }
    if(dato == '2'){
      digitalWrite(11,LOW);
      delay(10);
    }
    if(dato == '3'){
      digitalWrite(11,HIGH);
      delay(10);
    }
  }

}
