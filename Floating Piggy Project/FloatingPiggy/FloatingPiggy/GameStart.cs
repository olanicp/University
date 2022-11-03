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
    public partial class GameStart : Form
    {
        public static WMPLib.WindowsMediaPlayer music_player = new WMPLib.WindowsMediaPlayer();
        public GameStart()
        {
            InitializeComponent();
            music_player.URL = (@"C:\Users\Ola\Desktop\flappy bird clone\FloatingPiggy\FloatingPiggy\Resources\background_music.wav");
            music_player.controls.play();
        }

        private void OptionsButtonEvent(object sender, EventArgs e)
        {
            GameOptions gameOptions = new GameOptions();
            gameOptions.Show();
        }

        private void PlayButtonEvent(object sender, EventArgs e)
        {
            GameView gameView = new GameView();
            gameView.Show();
            Application.OpenForms["GameStart"].Hide();
        }

        private void ExitButtonEvent(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void OptionsHover(object sender, EventArgs e)
        {
            OptionsButton.Image = Properties.Resources.options_22;
        }

        private void OptionsLeave(object sender, EventArgs e)
        {
            OptionsButton.Image = Properties.Resources.options;
        }

        private void PlayHover(object sender, EventArgs e)
        {
            PlayButton.Image = Properties.Resources.play_2;
        }

        private void PlayLeave(object sender, EventArgs e)
        {
            PlayButton.Image = Properties.Resources.play;
        }

        private void ExitHover(object sender, EventArgs e)
        {
            ExitButton.Image = Properties.Resources.exit_2;
        }

        private void ExitLeave(object sender, EventArgs e)
        {
            ExitButton.Image = Properties.Resources.exit;
        }
    }
}
