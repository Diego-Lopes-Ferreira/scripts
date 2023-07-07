const date = new Date();
const sla = {
  id: '63623',
  task_id: '#0-001',
  cat_id: '#1-001',
  seconds: '32',
  minutes: '23',
  hours: '0',
  days: '0',
  start_date: '2020-07-09T11:17:58.361Z',
  end_date: date.toISOString(),
  notes: '',
}
//console.log(sla)

function formatDate(before, now) {
  let ms = new Date(now).getTime() - new Date(before).getTime()
  return ms / 1000
}

function hms(seconds) {
  let minutes = 0, hours = 0, days = 0;
  if (seconds > 60) {
    minutes = Math.floor(seconds / 60);
    seconds = Math.floor(seconds % 60);
  }
  if (minutes > 60) {
    hours = Math.floor(minutes / 60);
    minutes = minutes % 60;
  }
  if (hours > 24) {
    days = Math.floor(hours / 24);
    hours = hours % 24;
  }
  return {seconds, minutes, hours, days}
}

//console.log(sla.start_date)
//console.log(sla.end_date)
//let timessss = formatDate(sla.start_date, sla.end_date);
//console.log(timessss);
//console.log(hms(timessss));

function get_local_hm(date) {
  return date.getHours() + ':' + date.getMinutes()
}
console.log(get_local_hm(new Date()))

function str_dhms(date={seconds: 1, minutes: 1, hours: 1, days: 1}) {
  let final = ''
  if (date.days > 0) {
    final += date.days + 'd '
  }
  if (date.hours > 0) {
    final += date.hours + 'h '
  }
  if (date.minutes > 0) {
    final += date.minutes + 'min '
  }
  if (date.seconds > 0) {
    final += date.seconds + 's'
  }
  return final
}
console.log(str_dhms({seconds: 0, minutes: 15, hours: 1, days: 0}))
