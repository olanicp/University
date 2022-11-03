using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FloatingPiggy
{
    internal class Collisions
    {
        PictureBox piggy = Application.OpenForms["GameView"].Controls["Piggy"] as PictureBox;
        PictureBox top = Application.OpenForms["GameView"].Controls["TopObstacle"] as PictureBox;
        PictureBox bottom = Application.OpenForms["GameView"].Controls["BottomObstacle"] as PictureBox;
        PictureBox ground = Application.OpenForms["GameView"].Controls["GameGround"] as PictureBox;

        public bool ObstacleCollison()
        {
            if(piggy.Bounds.IntersectsWith(bottom.Bounds) || piggy.Bounds.IntersectsWith(top.Bounds))
            {
                return false;
            }
            return true;
        }

        public bool OtherCollision()
        {
            if(piggy.Bounds.IntersectsWith(ground.Bounds) || piggy.Top < -15)
            {
                return false;
            }
            return true;
        }

    }
}
