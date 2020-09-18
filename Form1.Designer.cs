namespace Car_Racing_Game
{
    partial class Form1
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.track_1 = new System.Windows.Forms.PictureBox();
            this.track_2 = new System.Windows.Forms.PictureBox();
            this.track_3 = new System.Windows.Forms.PictureBox();
            this.score_txt = new System.Windows.Forms.Label();
            this.over_text = new System.Windows.Forms.Label();
            this.enemy_1 = new System.Windows.Forms.PictureBox();
            this.enemy_2 = new System.Windows.Forms.PictureBox();
            this.player = new System.Windows.Forms.PictureBox();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.speed_txt = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.track_1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.track_2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.track_3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.enemy_1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.enemy_2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.player)).BeginInit();
            this.SuspendLayout();
            // 
            // track_1
            // 
            this.track_1.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.track_1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.track_1.Location = new System.Drawing.Point(231, 39);
            this.track_1.Name = "track_1";
            this.track_1.Size = new System.Drawing.Size(20, 152);
            this.track_1.TabIndex = 0;
            this.track_1.TabStop = false;
            // 
            // track_2
            // 
            this.track_2.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.track_2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(192)))));
            this.track_2.Location = new System.Drawing.Point(231, 260);
            this.track_2.Name = "track_2";
            this.track_2.Size = new System.Drawing.Size(20, 152);
            this.track_2.TabIndex = 1;
            this.track_2.TabStop = false;
            // 
            // track_3
            // 
            this.track_3.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.track_3.BackColor = System.Drawing.Color.Yellow;
            this.track_3.Location = new System.Drawing.Point(231, 485);
            this.track_3.Name = "track_3";
            this.track_3.Size = new System.Drawing.Size(20, 152);
            this.track_3.TabIndex = 2;
            this.track_3.TabStop = false;
            // 
            // score_txt
            // 
            this.score_txt.AutoSize = true;
            this.score_txt.Font = new System.Drawing.Font("Cooper Black", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.score_txt.ForeColor = System.Drawing.Color.Yellow;
            this.score_txt.Location = new System.Drawing.Point(12, 26);
            this.score_txt.Name = "score_txt";
            this.score_txt.Size = new System.Drawing.Size(63, 19);
            this.score_txt.TabIndex = 3;
            this.score_txt.Text = "Score -";
            // 
            // over_text
            // 
            this.over_text.AutoSize = true;
            this.over_text.Font = new System.Drawing.Font("Cooper Black", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.over_text.ForeColor = System.Drawing.Color.Yellow;
            this.over_text.Location = new System.Drawing.Point(192, 281);
            this.over_text.Name = "over_text";
            this.over_text.Size = new System.Drawing.Size(97, 19);
            this.over_text.TabIndex = 4;
            this.over_text.Text = "Game Over";
            // 
            // enemy_1
            // 
            this.enemy_1.Image = ((System.Drawing.Image)(resources.GetObject("enemy_1.Image")));
            this.enemy_1.Location = new System.Drawing.Point(63, 135);
            this.enemy_1.Name = "enemy_1";
            this.enemy_1.Size = new System.Drawing.Size(46, 74);
            this.enemy_1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.enemy_1.TabIndex = 5;
            this.enemy_1.TabStop = false;
            // 
            // enemy_2
            // 
            this.enemy_2.Image = ((System.Drawing.Image)(resources.GetObject("enemy_2.Image")));
            this.enemy_2.Location = new System.Drawing.Point(354, 73);
            this.enemy_2.Name = "enemy_2";
            this.enemy_2.Size = new System.Drawing.Size(46, 74);
            this.enemy_2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.enemy_2.TabIndex = 6;
            this.enemy_2.TabStop = false;
            // 
            // player
            // 
            this.player.Image = ((System.Drawing.Image)(resources.GetObject("player.Image")));
            this.player.Location = new System.Drawing.Point(138, 427);
            this.player.Name = "player";
            this.player.Size = new System.Drawing.Size(57, 99);
            this.player.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.player.TabIndex = 7;
            this.player.TabStop = false;
            // 
            // timer1
            // 
            this.timer1.Enabled = true;
            this.timer1.Interval = 10;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // speed_txt
            // 
            this.speed_txt.AutoSize = true;
            this.speed_txt.Font = new System.Drawing.Font("Cooper Black", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.speed_txt.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(255)))), ((int)(((byte)(255)))));
            this.speed_txt.Location = new System.Drawing.Point(286, 26);
            this.speed_txt.Name = "speed_txt";
            this.speed_txt.Size = new System.Drawing.Size(56, 19);
            this.speed_txt.TabIndex = 8;
            this.speed_txt.Text = "Speed";
            this.speed_txt.Click += new System.EventHandler(this.speed_txt_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.ClientSize = new System.Drawing.Size(484, 661);
            this.Controls.Add(this.speed_txt);
            this.Controls.Add(this.player);
            this.Controls.Add(this.enemy_2);
            this.Controls.Add(this.enemy_1);
            this.Controls.Add(this.over_text);
            this.Controls.Add(this.score_txt);
            this.Controls.Add(this.track_3);
            this.Controls.Add(this.track_2);
            this.Controls.Add(this.track_1);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Car Racing Game";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Form1_KeyDown);
            ((System.ComponentModel.ISupportInitialize)(this.track_1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.track_2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.track_3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.enemy_1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.enemy_2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.player)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox track_1;
        private System.Windows.Forms.PictureBox track_2;
        private System.Windows.Forms.PictureBox track_3;
        private System.Windows.Forms.Label score_txt;
        private System.Windows.Forms.Label over_text;
        private System.Windows.Forms.PictureBox enemy_1;
        private System.Windows.Forms.PictureBox enemy_2;
        private System.Windows.Forms.PictureBox player;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Label speed_txt;
    }
}

