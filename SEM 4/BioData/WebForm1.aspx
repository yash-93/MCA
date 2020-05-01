<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="BioData.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <link rel="stylesheet" href="Content/bootstrap.min.css">
    <link rel="stylesheet" href="Content/Site.css"/>
    <title></title>
</head>
<body>
    <div class="container">
        <div class="row">
            <h1 class="display-1 text-center">Create your Resume</h1>
        </div>
        <form id="form1" runat="server">
            <div class="row">
                <div class="col-lg-6">
                    <div class="form-group">
                        <asp:TextBox ID="FirstName" runat="server" type="text" class="form-control" ToolTip="Enter First Name" placeholder="First Name"></asp:TextBox>
                    </div>
                </div>
                <div class="col-lg-6">
                    <div class="form-group">
                        <asp:TextBox ID="LastName" runat="server" type="text" class="form-control" ToolTip="Enter Last Name" placeholder="Last Name"></asp:TextBox>
                    </div>
                </div>
            </div>

            <div class="row">
                <div class="col-lg-6">
                    <div class="form-group">
                        <asp:TextBox ID="PhoneNumber" runat="server" type="text" class="form-control" ToolTip="Enter Phone Number" placeholder="Phone Number"></asp:TextBox>
                    </div>
                </div>
            </div>

            <div class="row">
                <div class="col-lg-12">
                    <div class="form-group">
                        <asp:TextBox ID="EMail" runat="server" type="text" class="form-control" ToolTip="Enter E-Mail" placeholder="E-Mail"></asp:TextBox>
                    </div>
                </div>
            </div>
            
            <div class="row">
                <div class="col-lg-12">
                   <div class="form-group">
                       <asp:TextBox ID="CareerObjective" TextMode="multiline" Columns="10" Rows="5" runat="server" type="text" class="form-control" placeholder="Career Objective"></asp:TextBox>
                   </div>
                </div>
            </div>

            <h3>ACADEMICS QUALIFICATION</h3>
            <div class="row">
                <div class="col-lg-4">
                   <div class="form-group">
                       <asp:TextBox ID="PostGrad1" runat="server" class="form-control" ReadOnly="true">MCA/M.Sc.</asp:TextBox>
                   </div>
                </div>
                <div class="col-lg-4">
                    <div class="form-group">
                        <asp:TextBox ID="InstituteName1" runat="server" type="text" class="form-control" ToolTip="Enter Phone Number" placeholder="Intitutuion/School Name"></asp:TextBox>
                    </div>
                </div>
                <div class="col-lg-4">
                    <div class="form-group">
                        <asp:TextBox ID="Percentage1" runat="server" type="number" class="form-control" placeholder="Percentage/CGPA"></asp:TextBox>
                    </div>
                </div>
            </div>
            <div class="row">
                <div class="col-lg-4">
                   <div class="form-group">
                       <asp:TextBox ID="PostGrad2" runat="server" class="form-control" ReadOnly="true">BCA/B.Sc.</asp:TextBox>
                   </div>
                </div>
                <div class="col-lg-4">
                    <div class="form-group">
                        <asp:TextBox ID="InstituteName2" runat="server" type="text" class="form-control" ToolTip="Enter Phone Number" placeholder="Intitutuion/School Name"></asp:TextBox>
                    </div>
                </div>
                <div class="col-lg-4">
                    <div class="form-group">
                        <asp:TextBox ID="Percentage2" runat="server" type="number" class="form-control" placeholder="Percentage/CGPA"></asp:TextBox>
                    </div>
                </div>
            </div>
            <div class="row">
                <div class="col-lg-4">
                   <div class="form-group">
                       <asp:TextBox ID="PostGrad3" runat="server" class="form-control" ReadOnly="true">XII</asp:TextBox>
                   </div>
                </div>
                <div class="col-lg-4">
                    <div class="form-group">
                        <asp:TextBox ID="InstituteName3" runat="server" type="text" class="form-control" ToolTip="Enter Phone Number" placeholder="Intitutuion/School Name"></asp:TextBox>
                    </div>
                </div>
                <div class="col-lg-4">
                    <div class="form-group">
                        <asp:TextBox ID="Percentage3" runat="server" type="number" class="form-control" placeholder="Percentage/CGPA"></asp:TextBox>
                    </div>
                </div>
            </div>
            <div class="row">
                <div class="col-lg-4">
                   <div class="form-group">
                       <asp:TextBox ID="PostGrad4" runat="server" class="form-control" ReadOnly="true">X</asp:TextBox>
                   </div>
                </div>
                <div class="col-lg-4">
                    <div class="form-group">
                        <asp:TextBox ID="InstituteName4" runat="server" type="text" class="form-control" ToolTip="Enter Phone Number" placeholder="Intitutuion/School Name"></asp:TextBox>
                    </div>
                </div>
                <div class="col-lg-4">
                    <div class="form-group">
                        <asp:TextBox ID="Percentage4" runat="server" type="number" class="form-control" placeholder="Percentage/CGPA"></asp:TextBox>
                    </div>
                </div>
            </div>

            <h3>PROJECT WORK</h3>
            <div class="row">
                <div class="col-lg-12">
                    <div class="form-group">
                        <asp:TextBox ID="ProjectTitle" runat="server" type="text" class="form-control" ToolTip="Enter Project Title" placeholder="Project Title"></asp:TextBox>
                    </div>
                </div>
            </div>

            <div class="row">
                <div class="col-lg-12">
                   <div class="form-group">
                       <asp:TextBox ID="ProjectDescription" TextMode="multiline" Columns="10" Rows="5" runat="server" type="text" class="form-control" placeholder="Project Description"></asp:TextBox>
                   </div>
                </div>
            </div>

            <h3>PERSONAL SKILLS</h3>
            <div class="row">
                <div class="col-lg-12">
                   <div class="form-group">
                       <asp:TextBox ID="Skills" TextMode="multiline" Columns="10" Rows="5" runat="server" type="text" class="form-control"></asp:TextBox>
                   </div>
                </div>
            </div>

            <div class="text-center">
                <asp:Button ID="SubmitButton" runat="server" Text="Submit" OnClick="SubmitButton_Click" class="btn btn-primary text-center btn-lg" />
            </div>
        </form>
    </div>
</body>
</html>
