# CV-Reporter
This project allows easy-decision making according to specified skills for recruiters, hiring managers, specialists in human resources, etc.

Open to all RPA developers for enhancement.

# Used Program & Extensions
Project created via UiPath Studio with dependencies;
- UiPath.Excel.Activities = 2.9.3
- UiPath.Mail.Activities = 1.9.3
- UiPath.PDF.Activities = 3.3.0
- UiPath.System.Activities = 20.10.1
- UiPath.UIAutomation.Activities = 20.10.6
- UiPathTeam.Excel.Extensions.Activities = 1.0.7107.42453

# Usage of Project
When program started to run it will prompt a select folder activitiy to user. This folder should contain resumes of candidates.(If the file inside of that specific folder has a different format than '.pdf' the program won't read it. It will skip it.)

Other window pops out is that the file selcetion activity. User need to specify the skill file (or whatever you want to call it) and it has to be '.txt' format. Before selecting the file or starting the program. Obviously skill file must contain wanted features in candidates and features need to be written one below the other. In addition features must be unique.

Final window is scaninng&scraping data quality level selection window.It allows choosing the level of quality.Keep in mind that more quality means more time. So user need to choose which selection more fits his/her wants. Therefore, it provides adjustment according to demand.

Once completed the all input activities, program will start to processing. When all things done in times (according to specified inputs) Report.xlsx excel file will be awaits user to review :)

# Excel Report File Observation

 >              | File Name | Skill 1 | Skill 2 | Skill 3 | Skill 4 | Skill 5 | ..... Skill n | Skill Count |
 ---------------
 >              |  Alpovka  |   OK    |         |   OK    |   OK    |         |   .   .   .   |      5      |
 
If n/2 <= row("Skill Count") is true. That aforementioned row will be painted as green.         
        
