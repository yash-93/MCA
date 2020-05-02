<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="ViewResume.aspx.cs" Inherits="BioData.WebForm2" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" />
    <link rel="stylesheet" href="Content/Site.css"/>
</head>
<body>
    <form id="form1" runat="server">
        <div class="container" style="border-style: double">

            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-4">
                    <h4><asp:Label ID="fname" runat="server"></asp:Label> <asp:Label ID="lname" runat="server"></asp:Label></h4>
                </div>
                <div class="col-lg-2">
                </div>
                <div class="col-lg-4">
                    <h4>+91 - <asp:Label ID="phone_num" runat="server"></asp:Label></h4>
                </div>
                <div class="col-lg-1"></div>
            </div>

            <div class="row">
                <div class="col-lg-7">
                </div>
                <div class="col-lg-4">
                    <h4><asp:Label ID="email" runat="server"></asp:Label></h4>
                </div>
                <div class="col-lg-1"></div>
            </div>
            <br />

            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-10" style="border: 2px solid black; background-color: #f2d4b4">
                    <strong>CAREER OBJECTIVE</strong>
                </div>
                <div class="col-lg-1"></div>
            </div>
            <br />
            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-10">
                    <asp:Label ID="car_obj" runat="server"></asp:Label>
                </div>
            </div>
            <br />
            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-10" style="border: 2px solid black; background-color: #f2d4b4">
                    <strong>ACADEMICS QUALIFICATION</strong>
                </div>
            </div>
            <br />
            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-10 text-center">
                    <asp:Table ID="acdmc_qual" runat="server" CellPadding="20" GridLines="Both" style="width: 100%">
                        <asp:TableHeaderRow>
                            <asp:TableCell><strong><asp:Label ID="qual" runat="server" Text="Qualification"></asp:Label></strong></asp:TableCell>
                            <asp:TableCell><strong><asp:Label ID="inst" runat="server" Text="Institute/School"></asp:Label></strong></asp:TableCell>
                            <asp:TableCell><strong><asp:Label ID="percnt" runat="server" Text="Percentage/CGPA"></asp:Label></strong></asp:TableCell>
                        </asp:TableHeaderRow>
                        <asp:TableRow>
                            <asp:TableCell><asp:Label ID="pg" runat="server" Text="MCA/M.Sc."></asp:Label></asp:TableCell>
                            <asp:TableCell><asp:Label ID="pg_inst_skul" runat="server"></asp:Label></asp:TableCell>
                            <asp:TableCell><asp:Label ID="pg_percnt_cgpa" runat="server"></asp:Label></asp:TableCell>
                        </asp:TableRow>
                        <asp:TableRow>
                            <asp:TableCell><asp:Label ID="ug" runat="server" Text="BCA/B.Sc."></asp:Label></asp:TableCell>
                            <asp:TableCell><asp:Label ID="ug_inst_skul" runat="server"></asp:Label></asp:TableCell>
                            <asp:TableCell><asp:Label ID="ug_percnt_cgpa" runat="server"></asp:Label></asp:TableCell>
                        </asp:TableRow>
                        <asp:TableRow>
                            <asp:TableCell><asp:Label ID="xii" runat="server" Text="XII"></asp:Label></asp:TableCell>
                            <asp:TableCell><asp:Label ID="xii_inst_skul" runat="server"></asp:Label></asp:TableCell>
                            <asp:TableCell><asp:Label ID="xii_percnt_cgpa" runat="server"></asp:Label></asp:TableCell>
                        </asp:TableRow>
                        <asp:TableRow>
                            <asp:TableCell><asp:Label ID="x" runat="server" Text="X"></asp:Label></asp:TableCell>
                            <asp:TableCell><asp:Label ID="x_inst_skul" runat="server"></asp:Label></asp:TableCell>
                            <asp:TableCell><asp:Label ID="x_percnt_cgpa" runat="server"></asp:Label></asp:TableCell>
                        </asp:TableRow>
                    </asp:Table>
                </div>
            </div>
            <br />
            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-10" style="border: 2px solid black; background-color: #f2d4b4">
                    <strong>COLLEGE PROJECT WORK DETAILS</strong>
                </div>
            </div>
            <br />
            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-2"><strong>Name of the Project: </strong></div>
                <div class="col-lg-5 text-center">
                    <strong><asp:Label ID="prjct_title" runat="server"></asp:Label></strong>
                </div>
                <div class="col-lg-3"></div>
            </div>
            <br />
            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-3"><strong>Description of the Project: </strong></div>
                <div class="col-lg-7">
                    <asp:Label ID="prjct_desc" runat="server"></asp:Label>
                </div>
            </div>
            <br />
            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-10" style="border: 2px solid black; background-color: #f2d4b4">
                    <strong>PERSONAL SKILLS</strong>
                </div>
            </div>
            <br />
            <div class="row">
                <div class="col-lg-1"></div>
                <div class="col-lg-10">
                    <asp:Label ID="prsnl_skills" runat="server"></asp:Label>
                </div>
            </div>
        </div>
    </form>
</body>
</html>
