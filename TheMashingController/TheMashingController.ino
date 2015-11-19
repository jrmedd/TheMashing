/*#############################################
THE MASHING - CONTROLLER CODE
CREATED BY JAMES MEDD FOR DIGITALMEDIALABS.ORG
SEPTEMBER 2015
#############################################*/

int numInputs = 10;//change this for the number of buttons you're using
int firstInputPin = 3;//change this depending on where your first button is plugged in
int lastInputPin = numInputs + firstInputPin;

void setup() {
 Serial.begin(9600);
 for (int i = firstInputPin; i < lastInputPin; i++) {
   pinMode(i, INPUT);
 }
}

void loop() {
  for (int i = firstInputPin; i < lastInputPin; i++) {
    Serial.write(digitalRead(i));//put ! in front of digitalRead if your pins go low on a button press
  }
  Serial.print("\n");
}
