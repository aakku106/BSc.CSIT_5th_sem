const data = new Promise((resolve, reject) => {
  let da = require('./one.json')
  da = JSON.parse(da)
  if (da != null) {
    resolve(da)
  } else {
    reject("Error fetching")
  }

})
data.then(da => console.log(da)).catch(err => console.log(err))

