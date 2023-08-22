#define ON 1
#define OFF 0

int vibration_sensor=A5;
int LED=13;
int steady=12;
int present_condition=0;
int previous_condition=0;

void setup() {
  pinMode(vibration_sensor,INPUT);
  pinMode(LED,OUTPUT);
  pinMode(steady,OUTPUT);
}

//writing a function to make the LED blink
void led_blink(void){
  digitalWrite(LED,ON);
  delay(250);
  digitalWrite(LED,OFF);
  delay(250);
  digitalWrite(LED,ON);
  delay(250);
  digitalWrite(LED,OFF);
  delay(250);
}

void loop(){
  previous_condition=present_condition;
  digitalWrite(steady,ON);
  present_condition=digitalRead(A5);
  if (previous_condition !=present_condition){
    digitalWrite(steady,OFF);
    led_blink();
  }
  else{
    digitalWrite(LED,OFF);
    digitalWrite(steady,ON);
  }
}