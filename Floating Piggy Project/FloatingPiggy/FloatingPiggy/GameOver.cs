using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace FloatingPiggy
{
    public partial class GameOver : Form
    {
        public GameOver()
        {
            InitializeComponent();
        }

        public void EndScore()
        {
            Score score = new Score();
            HighScore highScore = new HighScore();
            EndGameScore.Text = "Score: " + score.GetScore();
            highScore.Scores.Add(score.GetScore().ToString());
            highScore.WriteToFile(highScore.Scores);
        }

        public void HighestScore()
        {
            HighScore highScore = new HighScore();
            if (!File.Exists(highScore.fileCopy))
                Highest.Text = "Highest " + EndGameScore.Text;
            else
                Highest.Text = "Highest Score: " + highScore.Maximum();
        }

        private void EndGameEvent(object sender, EventArgs e)
        {
            Application.Exit();
        }

    }
}
