using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

namespace BioData
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        SqlConnection con = new SqlConnection(@"Data Source=DESKTOP-04LTEGC\SQLEXPRESS;Initial Catalog=myDb;Integrated Security=True");
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void SubmitButton_Click(object sender, EventArgs e)
        {
            con.Open();
            SqlCommand cmd = con.CreateCommand();
            cmd.CommandType = System.Data.CommandType.Text;
            cmd.CommandText = "INSERT INTO userTable VALUES('" + FirstName.Text + "','" + LastName.Text + "','" + EMail.Text + "','" + CareerObjective.Text + "'," +
                "'" + InstituteName1.Text + "','" + Percentage1.Text + "','" + InstituteName2.Text + "','" + Percentage2.Text + "','" + InstituteName3.Text + "'," +
                "'" + Percentage3.Text + "','" + InstituteName4.Text + "','" + Percentage4.Text + "','" + ProjectTitle.Text + "','" + ProjectDescription.Text + "'," +
                "'" + Skills.Text + "','" + PhoneNumber.Text + "')";
            cmd.ExecuteNonQuery();
            con.Close();
        }
    }
}