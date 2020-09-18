using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Car_Racing_Game
{
    public partial class Form1 : Form
    {
        int currentSpeed = 5;
        int PlayerSpeed = 0;
        public Form1()
        {
            InitializeComponent();
            over_text.Visible = false;
        }

        private void GameOver()
        {
            if (player.Bounds.IntersectsWith(enemy_1.Bounds))
            {
                timer1.Enabled = false;
                over_text.Visible = true;
                speed_txt.Text = "Speed -0 MPH";
            }

            if (player.Bounds.IntersectsWith(enemy_2.Bounds))
            {
                timer1.Enabled = false;
                over_text.Visible = true;
                speed_txt.Text = "Speed -0 MPH";
            }
        }
        private void track_line(int speed)
        {
            if (track_1.Top>=700)
            {
                track_1.Top = 0;
            }
            else
            {
                track_1.Top += speed;
            }

            if (track_2.Top >= 700)
            {
                track_2.Top = 0;
            }
            else
            {
                track_2.Top += speed;
            }

            if (track_3.Top >= 700)
            {
                track_3.Top = 0;
            }
            else
            {
                track_3.Top += speed;
            }

            Random rnd = new Random();
            int x, y;
            if (enemy_1.Top>=650)
            {
                x = rnd.Next(0, 200);
                enemy_1.Location = new Point(x, 0);
            }
            else
            {
                enemy_1.Top += speed;
            }

            if (enemy_2.Top >= 500)
            {
                y = rnd.Next(0, 400);
                enemy_2.Location = new Point(y, 0);
            }
            else
            {
                enemy_2.Top += speed;
            }
        }
        private void Form1_Load(object sender, EventArgs e)
        {
           
        }

        int score = 0;
        private void timer1_Tick(object sender, EventArgs e)
        {
            track_line(PlayerSpeed);
            GameOver();
            if (enemy_1.Top>500)
            {
                enemy_1.Top = 0;
                score += 10;
                score_txt.Text = "Score - " + score;
            }

            if (enemy_2.Top > 500)
            {
                enemy_2.Top = 0;
                score += 10;
                score_txt.Text = "Score - " + score;
            }
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode==Keys.Left)
            {
                if (player.Left>50)
                {
                    player.Left += -35;
                }
            }

            else if (e.KeyCode==Keys.Right)
            {
                if (player.Right<450)
                {
                    player.Left += 35;
                }
            }

            else if (e.KeyCode==Keys.Up)
            {
                if (PlayerSpeed < 50)
                    PlayerSpeed++;
                    speed_txt.Text = "Speed -" + currentSpeed + "MPH".ToString();
                    currentSpeed++;
            }


            else if (e.KeyCode == Keys.Down)
            {
                if (PlayerSpeed < 50)
                    PlayerSpeed--;
                speed_txt.Text = "Speed " + currentSpeed + " MPH ".ToString();
                currentSpeed--;
            }

        }

        private void speed_txt_Click(object sender, EventArgs e)
        {

        }
    }
}
