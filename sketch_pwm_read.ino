double channel;
int aux_out = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  Serial.begin(9600);
  pinMode(aux_out, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  channel = pulseIn(2, HIGH);
  Serial.println(channel);
  if ((channel > 1700)||(channel < 1400))
    {
      digitalWrite(aux_out, HIGH);
    }
   else
    {
      digitalWrite(aux_out,LOW);
    }
   Serial.println(aux_out);
}
