<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="LOGIN.aspx.cs" Inherits="CREATING_LOGIN_FORM_IN_ASP.NET.LOGIN" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .auto-style2 {
            width: 248px;
        }
        .auto-style3 {
           width: 763px;
        }
        table{
            margin:auto;
            width:300px;
            border:5px solid black;
            background-color:lightgray;
        }
        td{
            text-align:center;
            font-size:30px;
            font-family: 'Arial Rounded MT';
        }
        .link{
            font-size:18px;
            text-align:center;
        }
  
    </style>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <table cellpadding="4" cellspacing="4">
                <tr>
                    <td colspan="2">LOGIN</td>
                </tr>
                <tr>
                    <td class="auto-style2">USERNAME</td>
                    <td class="auto-style3">
                        <asp:TextBox ID="UserTextBox" runat="server" Width="202px"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="UserTextBox" Display="Dynamic" ErrorMessage="Enter Name" ForeColor="Red" SetFocusOnError="True"></asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style2" >PASSWORD</td>
                    <td class="auto-style3">
                        <asp:TextBox ID="PassTextBox" runat="server" Width="202px" TextMode="Password"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="PassTextBox" Display="Dynamic" ErrorMessage="Enter Password" ForeColor="Red" SetFocusOnError="True"></asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td colspan="2">
                        <asp:Button ID="LoginButton" runat="server" Height="35px" Text="LOGIN" Width="87px" OnClick="LoginButton_Click" />
                    </td>
                </tr>
                <tr>
                    <td class="link" colspan="2">
                        <a href="REGISTER.aspx">Not Registered yet? <br /> Click Here to Sign up</a>
                        </td>
                </tr>
            </table>
        </div>
    </form>
</body>
</html>
