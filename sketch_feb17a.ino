String voice;
//--------------------------Call A Function-------------------------------//

//-----------------------------------------------------------------------//  
 void setup() {
  pinMode(6, OUTPUT);   //motors
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
 
}

void forward(){
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,1);
  digitalWrite(9,0);
}

void backward(){
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(9,1);
}

void left(){
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,1);
  digitalWrite(9,0);
}

void right(){
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,0);
  digitalWrite(9,0);
}

void halt(){
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  
}

//-----------------------------------------------------------------------//  
 void loop() {
  while (Serial.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable 
  char c = Serial.read(); //Conduct a serial read
  if (c == '#') {break;} //Exit the loop when the # is detected after the word
  voice += c; //Shorthand for voice = voice + c
  }  
  if (voice.length() > 0) {
    Serial.println(voice); 
//-----------------------------------------------------------------------//    
if(voice=="forward"){
  forward();
}
else if(voice=="backward"){
  backward();
}
else if(voice=="left"){
  left();
}
else if(voice=="right"){
  right();
}
else if(voice=="stop"){
  halt();
}

 
//-----------------------------------------------------------------------//  
voice="";}} //Reset the variable after initiating
