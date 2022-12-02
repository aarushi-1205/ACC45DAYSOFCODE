def display_time():  
    hour = str(time.strftime("%H"))  
    minute = str(time.strftime("%M"))  
    second = str(time.strftime("%S"))  
  
    if int(hour) >= 12 and int(hour) < 24 and int (minute) >= 0:  
        meridiem_label.config(text = "PM")  
    else:  
        meridiem_label.config(text = "AM")  
  
    if int(hour) > 12:  
        hour = str((int(hour) - 12))  
    elif int(hour) == 0:  
        hour = str(12)  
  
    hour_label.config(text = hour)  
    minute_label.config(text = minute)  
    second_label.config(text = second)  
    hour_label.after(200, display_time)  
