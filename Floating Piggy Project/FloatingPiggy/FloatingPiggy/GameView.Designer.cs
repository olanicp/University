namespace FloatingPiggy
{
    partial class GameView
    {
        /// <summary>
        /// Wymagana zmienna projektanta.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Wyczyść wszystkie używane zasoby.
        /// </summary>
        /// <param name="disposing">prawda, jeżeli zarządzane zasoby powinny zostać zlikwidowane; Fałsz w przeciwnym wypadku.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Kod generowany przez Projektanta formularzy systemu Windows

        /// <summary>
        /// Metoda wymagana do obsługi projektanta — nie należy modyfikować
        /// jej zawartości w edytorze kodu.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.GameGround = new System.Windows.Forms.PictureBox();
            this.TopObstacle = new System.Windows.Forms.PictureBox();
            this.BottomObstacle = new System.Windows.Forms.PictureBox();
            this.Piggy = new System.Windows.Forms.PictureBox();
            this.GameTimer = new System.Windows.Forms.Timer(this.components);
            this.GameScore = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.GameGround)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.TopObstacle)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.BottomObstacle)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.Piggy)).BeginInit();
            this.SuspendLayout();
            // 
            // GameGround
            // 
            this.GameGround.BackColor = System.Drawing.Color.Transparent;
            this.GameGround.Image = global::FloatingPiggy.Properties.Resources.ground;
            this.GameGround.Location = new System.Drawing.Point(-2, 468);
            this.GameGround.Name = "GameGround";
            this.GameGround.Size = new System.Drawing.Size(570, 76);
            this.GameGround.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.GameGround.TabIndex = 0;
            this.GameGround.TabStop = false;
            // 
            // TopObstacle
            // 
            this.TopObstacle.BackColor = System.Drawing.Color.Transparent;
            this.TopObstacle.Image = global::FloatingPiggy.Properties.Resources.pipedown;
            this.TopObstacle.Location = new System.Drawing.Point(446, -5);
            this.TopObstacle.Name = "TopObstacle";
            this.TopObstacle.Size = new System.Drawing.Size(80, 176);
            this.TopObstacle.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.TopObstacle.TabIndex = 1;
            this.TopObstacle.TabStop = false;
            // 
            // BottomObstacle
            // 
            this.BottomObstacle.BackColor = System.Drawing.Color.Transparent;
            this.BottomObstacle.Image = global::FloatingPiggy.Properties.Resources.pipe;
            this.BottomObstacle.Location = new System.Drawing.Point(283, 322);
            this.BottomObstacle.Name = "BottomObstacle";
            this.BottomObstacle.Size = new System.Drawing.Size(90, 163);
            this.BottomObstacle.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.BottomObstacle.TabIndex = 2;
            this.BottomObstacle.TabStop = false;
            // 
            // Piggy
            // 
            this.Piggy.BackColor = System.Drawing.Color.Transparent;
            this.Piggy.Image = global::FloatingPiggy.Properties.Resources.floating_piggy_basic;
            this.Piggy.Location = new System.Drawing.Point(30, 179);
            this.Piggy.Name = "Piggy";
            this.Piggy.Size = new System.Drawing.Size(95, 75);
            this.Piggy.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.Piggy.TabIndex = 3;
            this.Piggy.TabStop = false;
            // 
            // GameTimer
            // 
            this.GameTimer.Interval = 30;
            this.GameTimer.Tick += new System.EventHandler(this.GameTimerEvent);
            // 
            // GameScore
            // 
            this.GameScore.AutoSize = true;
            this.GameScore.BackColor = System.Drawing.Color.DarkKhaki;
            this.GameScore.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.GameScore.Location = new System.Drawing.Point(26, 501);
            this.GameScore.Name = "GameScore";
            this.GameScore.Size = new System.Drawing.Size(85, 22);
            this.GameScore.TabIndex = 4;
            this.GameScore.Text = "Score: 0";
            // 
            // GameView
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::FloatingPiggy.Properties.Resources.game_background;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(552, 544);
            this.Controls.Add(this.GameScore);
            this.Controls.Add(this.Piggy);
            this.Controls.Add(this.TopObstacle);
            this.Controls.Add(this.GameGround);
            this.Controls.Add(this.BottomObstacle);
            this.DoubleBuffered = true;
            this.Name = "GameView";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Floating Piggy";
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.KeyDownEvent);
            this.KeyUp += new System.Windows.Forms.KeyEventHandler(this.KeyUpEvent);
            ((System.ComponentModel.ISupportInitialize)(this.GameGround)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.TopObstacle)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.BottomObstacle)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.Piggy)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Timer GameTimer;
        private System.Windows.Forms.Label GameScore;
        private System.Windows.Forms.PictureBox BottomObstacle;
        private System.Windows.Forms.PictureBox Piggy;
        private System.Windows.Forms.PictureBox GameGround;
        private System.Windows.Forms.PictureBox TopObstacle;
    }
}

