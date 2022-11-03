using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FloatingPiggy
{
    public partial class GameView : Form
    {
        public static WMPLib.WindowsMediaPlayer jump_music = new WMPLib.WindowsMediaPlayer();
        int gravity = 4;

        public GameView()
        {
            InitializeComponent();
        }
        
       
        private void GameTimerEvent(object sender, EventArgs e)
        {
            Piggy.Top += gravity;
            Obstacles obs = new Obstacles();
            Collisions coll = new Collisions();
            obs.moveObstacles();
            obs.loopObstacles();

            if (!coll.ObstacleCollison() || !coll.OtherCollision())
            {
                
                Application.OpenForms["GameView"].Hide();
                EnableTimer(false);
                GameOver gameOver = new GameOver();
                gameOver.Show();
                gameOver.EndScore();
                gameOver.HighestScore();

                //return;
            }
        }

        private void KeyDownEvent(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Space) {
                EnableTimer(true); jump_music.URL = (@"C:\Users\Ola\Desktop\flappy bird clone\FloatingPiggy\FloatingPiggy\Resources\jump_sound.wav");
                jump_music.controls.play();
                gravity = -4;
            }
       
        }

        private void KeyUpEvent(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Space)
            {
                gravity = 4;
            }
        }

        public void EnableTimer(bool enabled)
        {
            if (enabled) GameTimer.Start();
            else GameTimer.Stop();
        }

    }
}
