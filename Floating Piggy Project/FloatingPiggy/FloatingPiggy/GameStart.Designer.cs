namespace FloatingPiggy
{
    partial class GameStart
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(GameStart));
            this.ExitButton = new System.Windows.Forms.PictureBox();
            this.OptionsButton = new System.Windows.Forms.PictureBox();
            this.PlayButton = new System.Windows.Forms.PictureBox();
            this.axWindowsMediaPlayer1 = new AxWMPLib.AxWindowsMediaPlayer();
            ((System.ComponentModel.ISupportInitialize)(this.ExitButton)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.OptionsButton)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PlayButton)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.axWindowsMediaPlayer1)).BeginInit();
            this.SuspendLayout();
            // 
            // ExitButton
            // 
            this.ExitButton.BackColor = System.Drawing.Color.Transparent;
            this.ExitButton.Image = global::FloatingPiggy.Properties.Resources.exit;
            this.ExitButton.Location = new System.Drawing.Point(440, 213);
            this.ExitButton.Name = "ExitButton";
            this.ExitButton.Size = new System.Drawing.Size(100, 50);
            this.ExitButton.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.ExitButton.TabIndex = 0;
            this.ExitButton.TabStop = false;
            this.ExitButton.Click += new System.EventHandler(this.ExitButtonEvent);
            this.ExitButton.MouseLeave += new System.EventHandler(this.ExitLeave);
            this.ExitButton.MouseHover += new System.EventHandler(this.ExitHover);
            // 
            // OptionsButton
            // 
            this.OptionsButton.BackColor = System.Drawing.Color.Transparent;
            this.OptionsButton.Image = global::FloatingPiggy.Properties.Resources.options;
            this.OptionsButton.Location = new System.Drawing.Point(40, 213);
            this.OptionsButton.Name = "OptionsButton";
            this.OptionsButton.Size = new System.Drawing.Size(100, 50);
            this.OptionsButton.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.OptionsButton.TabIndex = 1;
            this.OptionsButton.TabStop = false;
            this.OptionsButton.Click += new System.EventHandler(this.OptionsButtonEvent);
            this.OptionsButton.MouseLeave += new System.EventHandler(this.OptionsLeave);
            this.OptionsButton.MouseHover += new System.EventHandler(this.OptionsHover);
            // 
            // PlayButton
            // 
            this.PlayButton.BackColor = System.Drawing.Color.Transparent;
            this.PlayButton.Image = global::FloatingPiggy.Properties.Resources.play;
            this.PlayButton.Location = new System.Drawing.Point(243, 213);
            this.PlayButton.Name = "PlayButton";
            this.PlayButton.Size = new System.Drawing.Size(100, 50);
            this.PlayButton.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.PlayButton.TabIndex = 2;
            this.PlayButton.TabStop = false;
            this.PlayButton.Click += new System.EventHandler(this.PlayButtonEvent);
            this.PlayButton.MouseLeave += new System.EventHandler(this.PlayLeave);
            this.PlayButton.MouseHover += new System.EventHandler(this.PlayHover);
            // 
            // axWindowsMediaPlayer1
            // 
            this.axWindowsMediaPlayer1.Enabled = true;
            this.axWindowsMediaPlayer1.Location = new System.Drawing.Point(440, 133);
            this.axWindowsMediaPlayer1.Name = "axWindowsMediaPlayer1";
            this.axWindowsMediaPlayer1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axWindowsMediaPlayer1.OcxState")));
            this.axWindowsMediaPlayer1.Size = new System.Drawing.Size(75, 23);
            this.axWindowsMediaPlayer1.TabIndex = 3;
            this.axWindowsMediaPlayer1.Visible = false;
            // 
            // GameStart
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::FloatingPiggy.Properties.Resources.start_background;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(552, 544);
            this.Controls.Add(this.axWindowsMediaPlayer1);
            this.Controls.Add(this.PlayButton);
            this.Controls.Add(this.OptionsButton);
            this.Controls.Add(this.ExitButton);
            this.DoubleBuffered = true;
            this.Name = "GameStart";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Floating Piggy";
            ((System.ComponentModel.ISupportInitialize)(this.ExitButton)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.OptionsButton)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PlayButton)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.axWindowsMediaPlayer1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox ExitButton;
        private System.Windows.Forms.PictureBox OptionsButton;
        private System.Windows.Forms.PictureBox PlayButton;
        private AxWMPLib.AxWindowsMediaPlayer axWindowsMediaPlayer1;
    }
}