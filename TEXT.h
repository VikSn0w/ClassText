/*
    Questa classe crea un oggetto che può sostituire una stringa, permettendo di
    modificare il colore del font, dello sfondo della cella e la posizione su schermo del testo.
*/

class TEXTFIELD
{
    private:
            string MainText;
            int MainColor; int SizeX, SizeY; int PositionX, PositionY;

    public:
        void TextField       (string Text);
        void SetColor        (string TextColor, string BackColor);
      //void SetSize         (int Width, int Height);
        void SetPosition     (int X, int Y);
        void Print           ();
        void Help            ();

        TEXTFIELD();
};


