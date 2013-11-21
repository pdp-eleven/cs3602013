Public Class Form1

    Private Sub PornToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles PornToolStripMenuItem.Click
        System.Diagnostics.Process.Start("https://www.google.com/#q=no+porn+for+you")
    End Sub

    Private Sub populate_Click(sender As Object, e As EventArgs) Handles populate.Click
        Shell("cmd /c" & "pause", AppWinStyle.NormalFocus)
        'SendKeys.Send("{enter}")
        Shell("C:\Program Files (x86)\Microsoft Office\Office14\winword.exe", AppWinStyle.NormalFocus)
    End Sub
End Class