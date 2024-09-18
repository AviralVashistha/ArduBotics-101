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


 void loop() {
forward();
backward();
left();
right();
halt();
 

} //Reset the variable after initiating
