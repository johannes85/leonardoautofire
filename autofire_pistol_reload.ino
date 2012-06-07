
int buttonState;

void setup() {
	pinMode(12, INPUT);
	digitalWrite(12, HIGH);
  
	Mouse.begin();
	Keyboard.begin();
}

void loop() {
	buttonState = digitalRead(12);
	  
		if(buttonState == LOW){
		while(buttonState == LOW){
			Mouse.press(MOUSE_LEFT);
			delay(5);
			Mouse.release(MOUSE_LEFT);
			delay(30);
			buttonState = digitalRead(12);
		}
		Keyboard.write('r');
	}
}
