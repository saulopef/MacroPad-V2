

void SetLed(TECLADO teclado)
{

    switch (teclado)
    {

    case PRIMEIRO:
    {

        tecladoAtual = PRIMEIRO;
        // digitalWrite(LED1, LOW);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW);
        break;
    }
    case SEGUNDO:
    {

        tecladoAtual = SEGUNDO;
        // digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW);
        break;
    }
    case TERCEIRO:
    {

        tecladoAtual = TERCEIRO;
        // digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, HIGH);
        digitalWrite(LED5, LOW);
        break;
    }
    case QUARTO:
    {

        tecladoAtual = QUARTO;
        // digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, HIGH);
        break;
    }
    }
}

void sendCommand(char pressedKey)
{
    if (pressedKey == '1')
    {
        switch (tecladoAtual)
        {
        case PRIMEIRO:
        {
            break;
        }
        case SEGUNDO:
        {
            break;
        }
        case TERCEIRO:
        {
            break;
        }
        case QUARTO:
        {
            break;
        }
        }
    }
    else if (pressedKey == '2')
    {
        switch (tecladoAtual)
        {
        case PRIMEIRO:
        {
            break;
        }
        case SEGUNDO:
        {
            break;
        }
        case TERCEIRO:
        {
            break;
        }
        case QUARTO:
        {
            break;
        }
        }
    }
    else if (pressedKey == '2')
    {
        switch (tecladoAtual)
        {
        case PRIMEIRO:
        {
            break;
        }
        case SEGUNDO:
        {
            break;
        }
        case TERCEIRO:
        {
            break;
        }
        case QUARTO:
        {
            break;
        }
        }
    }
    else if (pressedKey == '2')
    {
        switch (tecladoAtual)
        {
        case PRIMEIRO:
        {
            break;
        }
        case SEGUNDO:
        {
            break;
        }
        case TERCEIRO:
        {
            break;
        }
        case QUARTO:
        {
            break;
        }
        }
    }
    else if (pressedKey == '2')
    {
        switch (tecladoAtual)
        {
        case PRIMEIRO:
        {
            break;
        }
        case SEGUNDO:
        {
            break;
        }
        case TERCEIRO:
        {
            break;
        }
        case QUARTO:
        {
            break;
        }
        }
    }
}