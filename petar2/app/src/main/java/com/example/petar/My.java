package com.example.petar;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.TextView;

public class My extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_my);


        ImageView iv_back = findViewById(R.id.iv_back);
        iv_back.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                finish();
            }
        });

        ImageView iv_setting = findViewById(R.id.iv_setting);
        iv_setting.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(My.this , Setting.class);
                startActivity(intent); //액티비티 이동
            }
        });








        TextView tv_basket = findViewById(R.id.tv_basket);
        tv_basket.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                //클릭 효과를 넣을 부분
                Intent intent = new Intent(My.this , basket.class);
                startActivity(intent);
            }
        });
        TextView tv_order = findViewById(R.id.tv_order);
        tv_order.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                //클릭 효과를 넣을 부분
                Intent intent = new Intent(My.this , sssss.class);
                startActivity(intent);
            }
        });











        ImageView iv_home = findViewById(R.id.iv_home);
        iv_home.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(My.this , MainActivity.class);
                startActivity(intent);
            }
        });

        ImageView iv_search = findViewById(R.id.iv_search);
        iv_search.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(My.this , Search.class);
                startActivity(intent);
            }
        });

        ImageView iv_order = findViewById(R.id.iv_order);
        iv_order.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(My.this , sssss.class);
                startActivity(intent);
            }
        });

    }
}