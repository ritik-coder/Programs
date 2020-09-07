<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="REGISTER.aspx.cs" Inherits="CREATING_LOGIN_FORM_IN_ASP.NET.REGISTER" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
         .auto-style1 {
            text-align:center;
            font-size:25px;
        }
        .auto-style2 {
            width: 482px;
        }
        .auto-style4 {
            width: 633px;
             margin:auto;
             border:5px solid black;
             background-color:lightgray;
              text-align:center;
        }
        .auto-style6 {
            width: 482px;
            height: 28px;
        }
        .auto-style7 {
            width: 256px;
            text-align:left;
            text-align:left;
        }
        .auto-style8 {
            width: 256px;
            height: 28px;
            text-align:left;
        }
        .auto-style9 {
            width: 256px;
            height: 31px;
            text-align:left;
        }
        .auto-style10 {
            width: 482px;
            height: 31px;
        }
        .auto-style11 {
            width: 256px;
            height: 30px;
            text-align:left;
        }
        .auto-style12 {
            width: 482px;
            height: 30px;
        }
        .auto-style13 {
            margin-left: 0px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <table cellpadding="3" cellspacing="3" class="auto-style4">
                <tr>
                    <td class="auto-style1" colspan="2">SIGN UP HERE</td>
                </tr>
                <tr>
                    <td class="auto-style8">FIRST NAME</td>
                    <td class="auto-style6">
                        <asp:TextBox ID="FirstNameTextBox" runat="server" OnTextChanged="TextBox1_TextChanged" Width="309px" CssClass="auto-style13"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ErrorMessage="Please Enter First Name" ForeColor="Red" SetFocusOnError="True" ControlToValidate="FirstNameTextBox" Display="Dynamic">*</asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style11">LAST NAME</td>
                    <td class="auto-style12">
                        <asp:TextBox ID="LastNameTextBox" runat="server" OnTextChanged="TextBox1_TextChanged" Width="309px" CssClass="auto-style13"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" Display="Dynamic" ErrorMessage="Please Enter Last Name" ForeColor="Red" SetFocusOnError="True" ControlToValidate="LastNameTextBox">*</asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style7">GENDER</td>
                    <td class="auto-style2">
                        <asp:DropDownList ID="DropDownList1" runat="server" Height="27px" Width="319px">
                            <asp:ListItem>Select</asp:ListItem>
                            <asp:ListItem>Male</asp:ListItem>
                            <asp:ListItem></asp:ListItem>
                            <asp:ListItem>Female</asp:ListItem>
                        </asp:DropDownList>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator3" InitialValue="Select" runat="server" Display="Dynamic" ErrorMessage="Please Enter Gender" ForeColor="Red" SetFocusOnError="True" ControlToValidate="DropDownList1">*</asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style7">EMAIL</td>
                    <td class="auto-style2">
                        <asp:TextBox ID="EmailTextBox" runat="server" OnTextChanged="TextBox1_TextChanged" Width="309px" CssClass="auto-style13"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" Display="Dynamic" ErrorMessage="Please Enter Email ID" ForeColor="Red" SetFocusOnError="True" ControlToValidate="EmailTextBox">*</asp:RequiredFieldValidator>
                        <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="EmailTextBox" Display="None" ErrorMessage="Invalid Email" SetFocusOnError="True" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*">*</asp:RegularExpressionValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style7">ADDRESS</td>
                    <td class="auto-style2">
                        <asp:TextBox ID="AddressTextBox" runat="server" OnTextChanged="TextBox1_TextChanged" Width="309px" CssClass="auto-style13"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator5" runat="server" Display="Dynamic" ErrorMessage="Please Enter Address" ForeColor="Red" SetFocusOnError="True" ControlToValidate="AddressTextBox">*</asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style7">USERNAME</td>
                    <td class="auto-style2">
                        <asp:TextBox ID="UsernameTextBox" runat="server" OnTextChanged="TextBox1_TextChanged" Width="309px" CssClass="auto-style13"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator6" runat="server" Display="Dynamic" ErrorMessage="Please Enter Username" ForeColor="Red" SetFocusOnError="True" ControlToValidate="UsernameTextBox">*</asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style9">PASSWORD</td>
                    <td class="auto-style10">
                        <asp:TextBox ID="PasswordTextBox" runat="server" OnTextChanged="TextBox1_TextChanged" Width="309px" CssClass="auto-style13" TextMode="Password"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator7" runat="server" Display="Dynamic" ErrorMessage="Please Please Enter Password" ForeColor="Red" SetFocusOnError="True" ControlToValidate="PasswordTextBox">*</asp:RequiredFieldValidator>
                        <asp:RegularExpressionValidator ID="RegularExpressionValidator2" runat="server" ControlToValidate="PasswordTextBox" Display="Dynamic" ErrorMessage="Please Enter Password with uppercase, lowercase, numbers and special characters" ForeColor="Red" SetFocusOnError="True" ValidationExpression="(?=^.{8,}$)((?=.*\d)|(?=.*\W+))(?![.\n])(?=.*[A-Z])(?=.*[a-z]).*$">*</asp:RegularExpressionValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style9">CONFIRM- PASSWORD</td>
                    <td class="auto-style10">
                        <asp:TextBox ID="ConfirmPasswordTextBox" runat="server" OnTextChanged="TextBox1_TextChanged" Width="309px" CssClass="auto-style13" TextMode="Password"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator8" runat="server" Display="Dynamic" ErrorMessage="Please Confirm Password" ForeColor="Red" SetFocusOnError="True" ControlToValidate="ConfirmPasswordTextBox">*</asp:RequiredFieldValidator>
                        <asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="PasswordTextBox" ControlToValidate="ConfirmPasswordTextBox" Display="Dynamic" ErrorMessage="Password Mismatched" ForeColor="Red" SetFocusOnError="True">*</asp:CompareValidator>
                    </td>
                </tr>
                <tr>
                    <td colspan="2">
                        <asp:Button ID="Button1" runat="server" Height="41px" Text="SIGN UP" Width="105px" OnClick="Button1_Click" />
                    </td>
                </tr>
                <tr>
                    <td colspan="2">
                        <a href="LOGIN.aspx">GO TO LOGIN</a></td>
                </tr>
            </table>
            <asp:ValidationSummary ID="ValidationSummary1" runat="server" BackColor="#CCCCCC" Font-Size="Larger" ForeColor="Red" />
        </div>
    </form>
</body>
</html>
