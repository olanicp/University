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
    public partial class GameOptions : Form
    {
        public GameOptions()
        {
            InitializeComponent();
            Application.OpenForms["GameStart"].Hide();
        }

        private void MusicTrackBarEvent(object sender, EventArgs e)
        {
            //GameStart.music_player.controls.play();
            MusicPiggy.Image = Properties.Resources.music_piggy;
            GameStart.music_player.settings.volume = MusicTrackBar.Value;

            if(MusicTrackBar.Value == 0)
            {
                MusicPiggy.Image = Properties.Resources.sleeping_piggy;
            }
        }

        private void BackButtonEvent(object sender, EventArgs e)
        {
            GameStart gameStart = new GameStart();
            gameStart.Show();
            Application.OpenForms["GameOptions"].Hide();
        }

        private void BackHover(object sender, EventArgs e)
        {
            BackButton.Image = Properties.Resources.back_2;
        }

        private void BackLeave(object sender, EventArgs e)
        {
            BackButton.Image = Properties.Resources.back;
        }
    }
}
