using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
namespace BioData
{
    public partial class WebForm2 : System.Web.UI.Page
    {
        SqlConnection con = new SqlConnection(@"Data Source=DESKTOP-04LTEGC\SQLEXPRESS;Initial Catalog=myDb;Integrated Security=True");
        protected void Page_Load(object sender, EventArgs e)
        {
            SqlDataAdapter da = new SqlDataAdapter("Select * from userTable where ID=6", con);
            System.Data.DataSet ds = new System.Data.DataSet();
            da.Fill(ds);
            fname.Text = ds.Tables[0].Rows[0]["fname"].ToString();
            lname.Text = ds.Tables[0].Rows[0]["lname"].ToString();
            phone_num.Text = ds.Tables[0].Rows[0]["phone"].ToString();
            email.Text = ds.Tables[0].Rows[0]["email"].ToString();
            car_obj.Text = ds.Tables[0].Rows[0]["carrerobjective"].ToString();
            pg_inst_skul.Text = ds.Tables[0].Rows[0]["PG_Institute"].ToString();
            pg_percnt_cgpa.Text = ds.Tables[0].Rows[0]["PG_Percentage"].ToString();
            ug_inst_skul.Text = ds.Tables[0].Rows[0]["UG_Institute"].ToString();
            ug_percnt_cgpa.Text = ds.Tables[0].Rows[0]["UG_Percentage"].ToString();
            xii_inst_skul.Text = ds.Tables[0].Rows[0]["SrSecondary_Institute"].ToString();
            xii_percnt_cgpa.Text = ds.Tables[0].Rows[0]["SrSecondary_Percentage"].ToString();
            x_inst_skul.Text = ds.Tables[0].Rows[0]["Secondary_Institute"].ToString();
            x_percnt_cgpa.Text = ds.Tables[0].Rows[0]["Secondary_Percentage"].ToString();
            prjct_title.Text = ds.Tables[0].Rows[0]["project_title"].ToString();
            prjct_desc.Text = ds.Tables[0].Rows[0]["project_desc"].ToString();
            prsnl_skills.Text = ds.Tables[0].Rows[0]["skills"].ToString();
        }
    }
}