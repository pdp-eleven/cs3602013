<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.sendStuff = New System.Windows.Forms.Button()
        Me.populate = New System.Windows.Forms.Button()
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip()
        Me.FileToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.SettingsToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ExitToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.PornToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.TextBox1 = New System.Windows.Forms.TextBox()
        Me.CheckedListBox1 = New System.Windows.Forms.CheckedListBox()
        Me.browseCode = New System.Windows.Forms.Button()
        Me.browseData = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.viewAttachment = New System.Windows.Forms.Button()
        Me.viewData = New System.Windows.Forms.Button()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.MenuStrip1.SuspendLayout()
        Me.SuspendLayout()
        '
        'sendStuff
        '
        Me.sendStuff.Location = New System.Drawing.Point(12, 212)
        Me.sendStuff.Name = "sendStuff"
        Me.sendStuff.Size = New System.Drawing.Size(344, 23)
        Me.sendStuff.TabIndex = 0
        Me.sendStuff.Text = "Send Stuff"
        Me.sendStuff.UseVisualStyleBackColor = True
        '
        'populate
        '
        Me.populate.Location = New System.Drawing.Point(12, 27)
        Me.populate.Name = "populate"
        Me.populate.Size = New System.Drawing.Size(344, 47)
        Me.populate.TabIndex = 1
        Me.populate.Text = "Populate My Slaves :3"
        Me.populate.UseVisualStyleBackColor = True
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.FileToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(368, 24)
        Me.MenuStrip1.TabIndex = 2
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'FileToolStripMenuItem
        '
        Me.FileToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.SettingsToolStripMenuItem, Me.ExitToolStripMenuItem, Me.PornToolStripMenuItem})
        Me.FileToolStripMenuItem.Name = "FileToolStripMenuItem"
        Me.FileToolStripMenuItem.Size = New System.Drawing.Size(37, 20)
        Me.FileToolStripMenuItem.Text = "File"
        '
        'SettingsToolStripMenuItem
        '
        Me.SettingsToolStripMenuItem.Name = "SettingsToolStripMenuItem"
        Me.SettingsToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.SettingsToolStripMenuItem.Text = "Settings"
        '
        'ExitToolStripMenuItem
        '
        Me.ExitToolStripMenuItem.Name = "ExitToolStripMenuItem"
        Me.ExitToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.ExitToolStripMenuItem.Text = "Exit"
        '
        'PornToolStripMenuItem
        '
        Me.PornToolStripMenuItem.Name = "PornToolStripMenuItem"
        Me.PornToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.PornToolStripMenuItem.Text = "Porn"
        '
        'TextBox1
        '
        Me.TextBox1.Location = New System.Drawing.Point(12, 241)
        Me.TextBox1.Multiline = True
        Me.TextBox1.Name = "TextBox1"
        Me.TextBox1.ScrollBars = System.Windows.Forms.ScrollBars.Vertical
        Me.TextBox1.Size = New System.Drawing.Size(344, 83)
        Me.TextBox1.TabIndex = 3
        '
        'CheckedListBox1
        '
        Me.CheckedListBox1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.CheckedListBox1.FormattingEnabled = True
        Me.CheckedListBox1.IntegralHeight = False
        Me.CheckedListBox1.Items.AddRange(New Object() {"Send Code", "Send Data"})
        Me.CheckedListBox1.Location = New System.Drawing.Point(17, 154)
        Me.CheckedListBox1.Name = "CheckedListBox1"
        Me.CheckedListBox1.Size = New System.Drawing.Size(119, 52)
        Me.CheckedListBox1.TabIndex = 4
        '
        'browseCode
        '
        Me.browseCode.Location = New System.Drawing.Point(200, 77)
        Me.browseCode.Name = "browseCode"
        Me.browseCode.Size = New System.Drawing.Size(75, 23)
        Me.browseCode.TabIndex = 5
        Me.browseCode.Text = "Browse"
        Me.browseCode.UseVisualStyleBackColor = True
        '
        'browseData
        '
        Me.browseData.Location = New System.Drawing.Point(200, 106)
        Me.browseData.Name = "browseData"
        Me.browseData.Size = New System.Drawing.Size(75, 23)
        Me.browseData.TabIndex = 6
        Me.browseData.Text = "Browse"
        Me.browseData.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.Location = New System.Drawing.Point(37, 77)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(99, 16)
        Me.Label1.TabIndex = 7
        Me.Label1.Text = "File Attachment"
        '
        'viewAttachment
        '
        Me.viewAttachment.Location = New System.Drawing.Point(281, 77)
        Me.viewAttachment.Name = "viewAttachment"
        Me.viewAttachment.Size = New System.Drawing.Size(75, 23)
        Me.viewAttachment.TabIndex = 8
        Me.viewAttachment.Text = "View"
        Me.viewAttachment.UseVisualStyleBackColor = True
        '
        'viewData
        '
        Me.viewData.Location = New System.Drawing.Point(281, 106)
        Me.viewData.Name = "viewData"
        Me.viewData.Size = New System.Drawing.Size(75, 23)
        Me.viewData.TabIndex = 9
        Me.viewData.Text = "View"
        Me.viewData.UseVisualStyleBackColor = True
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.Location = New System.Drawing.Point(37, 106)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(78, 16)
        Me.Label2.TabIndex = 10
        Me.Label2.Text = "File Of Data"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(368, 336)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.viewData)
        Me.Controls.Add(Me.viewAttachment)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.browseData)
        Me.Controls.Add(Me.browseCode)
        Me.Controls.Add(Me.CheckedListBox1)
        Me.Controls.Add(Me.TextBox1)
        Me.Controls.Add(Me.populate)
        Me.Controls.Add(Me.sendStuff)
        Me.Controls.Add(Me.MenuStrip1)
        Me.MainMenuStrip = Me.MenuStrip1
        Me.Name = "Form1"
        Me.Text = "ORCA: Online Routine Control & Automation"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents sendStuff As System.Windows.Forms.Button
    Friend WithEvents populate As System.Windows.Forms.Button
    Friend WithEvents MenuStrip1 As System.Windows.Forms.MenuStrip
    Friend WithEvents FileToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents SettingsToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ExitToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents PornToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents TextBox1 As System.Windows.Forms.TextBox
    Friend WithEvents CheckedListBox1 As System.Windows.Forms.CheckedListBox
    Friend WithEvents browseCode As System.Windows.Forms.Button
    Friend WithEvents browseData As System.Windows.Forms.Button
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents viewAttachment As System.Windows.Forms.Button
    Friend WithEvents viewData As System.Windows.Forms.Button
    Friend WithEvents Label2 As System.Windows.Forms.Label

End Class
