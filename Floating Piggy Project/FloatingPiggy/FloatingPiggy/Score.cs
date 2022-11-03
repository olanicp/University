using System;
using System.Windows.Forms;

namespace FloatingPiggy
{
    internal class Score
    {
        public static int score = 0;
        Label gameScore = Application.OpenForms["GameView"].Controls["GameScore"] as Label;

        public void UpdateScore()
        {
            score++;
        }

        public void SetScore()
        {
            gameScore.Text = $"Score: {score}";
        }

        public int GetScore()
        {
            return score;
        }

    }
}
