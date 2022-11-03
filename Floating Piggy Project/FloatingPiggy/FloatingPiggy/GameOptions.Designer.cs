namespace FloatingPiggy
{
    partial class GameOptions
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
            this.MusicTrackBar = new System.Windows.Forms.TrackBar();
            this.MusicPiggy = new System.Windows.Forms.PictureBox();
            this.BackButton = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.MusicTrackBar)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.MusicPiggy)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.BackButton)).BeginInit();
            this.SuspendLayout();
            // 
            // MusicTrackBar
            // 
            this.MusicTrackBar.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(97)))), ((int)(((byte)(141)))), ((int)(((byte)(184)))));
            this.MusicTrackBar.Location = new System.Drawing.Point(190, 167);
            this.MusicTrackBar.Maximum = 100;
            this.MusicTrackBar.Name = "MusicTrackBar";
            this.MusicTrackBar.Size = new System.Drawing.Size(156, 56);
            this.MusicTrackBar.TabIndex = 0;
            this.MusicTrackBar.Value = 25;
            this.MusicTrackBar.Scroll += new System.EventHandler(this.MusicTrackBarEvent);
            // 
            // MusicPiggy
            // 
            this.MusicPiggy.BackColor = System.Drawing.Color.Transparent;
            this.MusicPiggy.Image = global::FloatingPiggy.Properties.Resources.music_piggy;
            this.MusicPiggy.Location = new System.Drawing.Point(190, 229);
            this.MusicPiggy.Name = "MusicPiggy";
            this.MusicPiggy.Size = new System.Drawing.Size(152, 120);
            this.MusicPiggy.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.MusicPiggy.TabIndex = 2;
            this.MusicPiggy.TabStop = false;
            // 
            // BackButton
            // 
            this.BackButton.BackColor = System.Drawing.Color.Transparent;
            this.BackButton.Image = global::FloatingPiggy.Properties.Resources.back;
            this.BackButton.Location = new System.Drawing.Point(345, 432);
            this.BackButton.Name = "BackButton";
            this.BackButton.Size = new System.Drawing.Size(100, 50);
            this.BackButton.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.BackButton.TabIndex = 3;
            this.BackButton.TabStop = false;
            this.BackButton.Click += new System.EventHandler(this.BackButtonEvent);
            this.BackButton.MouseLeave += new System.EventHandler(this.BackLeave);
            this.BackButton.MouseHover += new System.EventHandler(this.BackHover);
            // 
            // GameOptions
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.LightBlue;
            this.BackgroundImage = global::FloatingPiggy.Properties.Resources.options_background2;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(552, 544);
            this.Controls.Add(this.BackButton);
            this.Controls.Add(this.MusicPiggy);
            this.Controls.Add(this.MusicTrackBar);
            this.DoubleBuffered = true;
            this.Name = "GameOptions";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Options";
            ((System.ComponentModel.ISupportInitialize)(this.MusicTrackBar)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.MusicPiggy)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.BackButton)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TrackBar MusicTrackBar;
        private System.Windows.Forms.PictureBox MusicPiggy;
        private System.Windows.Forms.PictureBox BackButton;
    }
}