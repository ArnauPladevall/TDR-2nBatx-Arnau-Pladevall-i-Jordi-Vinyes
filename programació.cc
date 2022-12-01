#include <.h>
#include <Servo.h>

bluetooth(0, 1);

int boto = 0;
int missatge = 0;

Servo polze;
Servo index;
Servo cor;
Servo anular;
Servo menovell;

void setup()
{

  polze.attach(3);
  index.attach(5);
  cor.attach(6);
  anular.attach(9);
  menovell.attach(10);

  polze.write(0);
  index.write(0);
  cor.write(0);
  anular.write(0);
  menovell.write(0);

  pinMode(12, INPUT);

  Serial.println(9600);
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop()
{

  boto = digitalRead(12);

  if (bluetooth.available() > 0)
  {
    missatge = bluetooth.read();
    Serial.println(missatge);
  }

  if (missatge == '7')
  {
    polze.write(90);
    missatge = 0;
    if (boto == HIGH)
    {
      delay(100);
      polze.detach();
      index.detach();
      cor.detach();
      anular.detach();
      menovell.detach();

      delay(100);

      polze.attach(3);
      index.attach(5);
      cor.attach(6);
      anular.attach(9);
      menovell.attach(10);

      boto = 0;
    }
  }

  if (missatge == '8')
  {
    index.write(180);
    missatge = 0;

    if (boto == HIGH)
    {
      delay(100);
      polze.detach();
      index.detach();
      cor.detach();
      anular.detach();
      menovell.detach();

      delay(100);

      polze.attach(3);
      index.attach(5);
      cor.attach(6);
      anular.attach(9);
      menovell.attach(10);

      boto = 0;
    }
  }

  if (missatge == '9')
  {
    cor.write(180);
    missatge = 0;

    if (boto == HIGH)
    {
      delay(100);
      polze.detach();
      index.detach();
      cor.detach();
      anular.detach();
      menovell.detach();

      delay(100);

      polze.attach(3);
      index.attach(5);
      cor.attach(6);
      anular.attach(9);
      menovell.attach(10);

      boto = 0;
    }
  }

  if (missatge == 'a')
  {
    anular.write(180);
    missatge = 0;

    if (boto == HIGH)
    {
      delay(100);
      polze.detach();
      index.detach();
      cor.detach();
      anular.detach();
      menovell.detach();

      delay(100);

      polze.attach(3);
      index.attach(5);
      cor.attach(6);
      anular.attach(9);
      menovell.attach(10);

      boto = 0;
    }
  }

  if (missatge == 'b')
  {
    menovell.write(120);
    missatge = 0;

    if (boto == HIGH)
    {
      delay(100);
      polze.detach();
      index.detach();
      cor.detach();
      anular.detach();
      menovell.detach();

      delay(100);

      polze.attach(3);
      index.attach(5);
      cor.attach(6);
      anular.attach(9);
      menovell.attach(10);

      boto = 0;
    }
  }

  if (missatge == '1')
  {
    polze.write(0);
    missatge = 0;
  }

  if (missatge == '2')
  {
    index.write(0);
    missatge = 0;
  }

  if (missatge == '3')
  {
    cor.write(0);
    missatge = 0;
  }

  if (missatge == '4')
  {
    anular.write(0);
    missatge = 0;
  }

  if (missatge == '5')
  {
    menovell.write(0);
    missatge = 0;
  }

  if (missatge == '6')
  {

    polze.write(90);
    index.write(180);
    cor.write(180);
    anular.write(180);
    menovell.write(180);

    missatge = 0;

    if (boto == HIGH)
    {
      delay(100);
      polze.detach();
      index.detach();
      cor.detach();
      anular.detach();
      menovell.detach();

      delay(300);

      polze.attach(3);
      index.attach(5);
      cor.attach(6);
      anular.attach(9);
      menovell.attach(10);

      boto = 0;
    }
  }

  if (missatge == 'c')
  {
    polze.write(0);
    index.write(0);
    cor.write(0);
    anular.write(0);
    menovell.write(0);

    missatge = 0;

    if (boto == HIGH)
    {
      delay(100);
      polze.detach();
      index.detach();
      cor.detach();
      anular.detach();
      menovell.detach();

      delay(100);

      polze.attach(3);
      index.attach(5);
      cor.attach(6);
      anular.attach(9);
      menovell.attach(10);

      boto = 0;
    }
  }
  if (boto == HIGH)
  {
    delay(100);
    polze.detach();
    index.detach();
    cor.detach();
    anular.detach();
    menovell.detach();

    delay(100);

    polze.attach(3);
    index.attach(5);
    cor.attach(6);
    anular.attach(9);
    menovell.attach(10);

    boto = 0;
  }
