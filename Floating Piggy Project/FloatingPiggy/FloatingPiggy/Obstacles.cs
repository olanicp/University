using System;
using System.Windows.Forms;

namespace FloatingPiggy
{
    internal class Obstacles : Score
    {
        public PictureBox top = Application.OpenForms["GameView"].Controls["TopObstacle"] as PictureBox;
        public PictureBox bottom = Application.OpenForms["GameView"].Controls["BottomObstacle"] as PictureBox;
        
        Random random = new Random();  

        int obstacleSpeed = 8;

        public void moveObstacles()
        {
            top.Left -= obstacleSpeed;
            bottom.Left -= obstacleSpeed;
        }

        public void loopObstacles()
        {
            if (bottom.Left < -120)
            {
                bottom.Left = 360;
                UpdateScore();
            }
            if (top.Left < -120)
            {
                top.Left = 430;
                UpdateScore();
            }

            SetScore();

        }

    }
}
