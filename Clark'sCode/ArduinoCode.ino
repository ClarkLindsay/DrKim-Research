int p;

void setup() {
 //pinMode(13,OUTPUT);
 Serial.begin(9600);
 }

  void loop()
  {
      if(Serial.available())
      {
          //p=Serial.read();
          //if(p!=-1)
          //{
              Serial.write(1);
              //digitalWrite(13,HIGH);
              delay(5000);
           //}
      // }
       //else
       //{
      //     digitalWrite(13,LOW);
        //   delay(1000);
      // }
   }
