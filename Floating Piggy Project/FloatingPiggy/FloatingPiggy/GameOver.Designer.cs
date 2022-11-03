namespace FloatingPiggy
{
    partial class GameOver
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
            this.EndGameScore = new System.Windows.Forms.Label();
            this.EndGame = new System.Windows.Forms.PictureBox();
            this.Highest = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.EndGame)).BeginInit();
            this.SuspendLayout();
            // 
            // EndGameScore
            // 
            this.EndGameScore.AutoSize = true;
            this.EndGameScore.BackColor = System.Drawing.Color.Transparent;
            this.EndGameScore.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.EndGameScore.ForeColor = System.Drawing.SystemColors.Highlight;
            this.EndGameScore.Location = new System.Drawing.Point(221, 255);
            this.EndGameScore.Name = "EndGameScore";
            this.EndGameScore.Size = new System.Drawing.Size(110, 29);
            this.EndGameScore.TabIndex = 0;
            this.EndGameScore.Text = "Score: 0";
            // 
            // EndGame
            // 
            this.EndGame.BackColor = System.Drawing.Color.Transparent;
            this.EndGame.Image = global::FloatingPiggy.Properties.Resources.exit;
            this.EndGame.Location = new System.Drawing.Point(222, 366);
            this.EndGame.Name = "EndGame";
            this.EndGame.Size = new System.Drawing.Size(100, 50);
            this.EndGame.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.EndGame.TabIndex = 1;
            this.EndGame.TabStop = false;
            this.EndGame.Click += new System.EventHandler(this.EndGameEvent);
            // 
            // Highest
            // 
            this.Highest.AutoSize = true;
            this.Highest.BackColor = System.Drawing.Color.Transparent;
            this.Highest.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.Highest.ForeColor = System.Drawing.Color.Fuchsia;
            this.Highest.Location = new System.Drawing.Point(172, 213);
            this.Highest.Name = "Highest";
            this.Highest.Size = new System.Drawing.Size(206, 29);
            this.Highest.TabIndex = 3;
            this.Highest.Text = "Highest Score: 0";
            // 
            // GameOver
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::FloatingPiggy.Properties.Resources.gameOver_background1;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(552, 544);
            this.Controls.Add(this.Highest);
            this.Controls.Add(this.EndGame);
            this.Controls.Add(this.EndGameScore);
            this.DoubleBuffered = true;
            this.Name = "GameOver";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "GameOver";
            ((System.ComponentModel.ISupportInitialize)(this.EndGame)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.PictureBox EndGame;
        private System.Windows.Forms.Label EndGameScore;
        private System.Windows.Forms.Label Highest;
    }
}