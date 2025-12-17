// index.js
const { API_ENDPOINT } = require('../../utils/config')
Page({
    data :{
      status : ""
    },
  onSubmit(e) {
    wx.showLoading({
      title: '加载中',
    })
    var that =this
    that.setData({
      status : e.detail.value['status']
    })
      var that = this
      wx.request({
        url: API_ENDPOINT,
        method:'POST',
        data: {
          status: that.data.status
        },
      header: {
        'content-type': 'application/x-www-form-urlencoded',
      },
      success (res) {
        wx.hideLoading()
        that.setData({
          Server_state : res.data
      })
    }
  })

  }
})
